# AOJ スタートアップ

## 最初のチャレンジ1題

ICPC Score Totalizer Software (ICPC国内予選 2007より)
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1147&lang=jp


## ヒント

サンプル入力(Sample Input) を読み込んで合計点を計算するコード 

 - score.c   C版
 - score.cpp C++版   
 - score.txt サンプル入力

## コンパイルと実行

```
g++ score.cpp -o score

./score < score.txt
1342
956
1900
2611

```

単に合計点を計算しているだけなので間違っています。
出題の指摘するとおり、平均点を計算するように修正して 
submit してください。

