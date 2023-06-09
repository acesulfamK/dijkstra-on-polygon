# ダイクストラ法を用いた、ポリゴン上の最短経路検索
Ito Takeru

# 実行方法

1.  make-graph.ipynbを用いて、PLYファイルからグラフデータを保存したtxtファイルを得る

    make-graph.ipynbのコード内でPLYファイルのpathを代入する変数と、出力ファイルのpathとファイル名を指定する変数があるので、代入して実行(google colabでないと動かなさそう)。


2. ダイクストラ法のc言語プログラムの第一引数にtxtファイルへのpathを指定して、dijkstra1-path.cを実行して、最短経路を出す。

    ./dikstraにある、c言語ファイルコンパイルし、1で作成した出力したファイルのpathを引数にして実行

    ```
    > gcc dijkstra1-path.c -o d1
    ```

3. djikstra1-path.cの実行中に、sを入力し、最短経路を求めたい2つの頂点のindexを空白区切りで入力(下図の20 300)

    ```
    > ./d1 ../sample-graph/airplane.txt
    [d]       Display Graph
    [p]       Dijkstra Algorithm (Priority First Search)
    [s]       Search Path
    [e]       Exit
    s
    input start and goal.
    20 300
    20 26 32 211 209 207 299 300
    ```


4. 出力をリスト形式にして、make-graph.ipynb内で実行


    make-graph.ipynb内にて以下のように変数routeををdijkstra1-path.cの出力に変更する
    ```
    route = [20,26,32,211,209,207,299,300]
    ```

# 結果

## 例1

元データ画像

<image src = "./Figs/helix.png" width = 300>

citation: FSU. PLY Files an ASCII Polygon Format https://people.sc.fsu.edu/~jburkardt/

グラフ化

<image src = "./Figs/helix-0to634-endpoints.png" width = 300>

最短路

<image src = "./Figs/helix-0to634-2.png" width = 300>

## 例2

元データ画像


<image src = "./Figs/apple.png" width = 300>

citation: FSU. PLY Files an ASCII Polygon Format https://people.sc.fsu.edu/~jburkardt/
data/ply/ply.html

グラフ化

<image src = "./Figs/apple-graph.png" width = 300>

最短路

<image src = "./Figs/apple-path.png" width = 300>


