# PLATEAU-SDK-for-Unreal-GameSample

![image](https://github.com/Synesthesias/PLATEAU-SDK-for-Unreal-GameSample/assets/118872701/eff479a6-c1d7-4f5c-b27b-6f87664238a1)


# 概要
[PLATEAU SDK for Unreal](https://github.com/Project-PLATEAU/PLATEAU-SDK-for-Unreal)のサンプルとして提供しているゲームアプリです。

## ゲームルール
- 制限時間内にロボットに襲われている要救助者を救出するゲームです。
- 敵を避けながら要救助者と接触し、なるべく多くの人数をゴールに連れて行き救助することを目指します。
- ゴールの場所は紙飛行機を取得すると明らかになります。
- 敵は街を歩き回りますが、プレイヤーを見つけると襲ってきます。敵に触れるとゲームオーバーです。
- 要救助者も街を歩き回りますが、プレイヤーと接触すると同行者として付いてくるようになります。
- 同行者がいる状態でゴールとなる建物に接触すると救助となります。

操作方法はタイトルメニューの「遊び方」から閲覧できます。

# 導入方法
サンプルゲームを遊んでみたい場合は下記の「ビルドアプリを入手したい場合」をご覧ください。
Unityでプロジェクトを開きたい場合は下記の「プロジェクトを導入したい場合」をご覧ください。

## ビルドアプリを入手する場合
Windows向けのビルドアプリが[Releaseページ](https://github.com/Synesthesias/PLATEAU-SDK-for-Unreal-GameSample/releases/tag/release)にあります。zipファイルをダウンロードして展開してアプリを起動します。

## プロジェクトを導入する場合

### 動作環境
UnrealEngine　3.5.2～

### 導入方法
- 次のコマンドでgit lfsを導入してからリポジトリをクローンします。
git lfs install
git clone https://github.com/Synesthesias/PLATEAU-SDK-for-Unreal-GameSample.git

- Unityでプロジェクトを開きます。
この際、Unity起動時に「Enter Safe Mode?」というダイアログが出る場合は「Ignore」を押します。

シーンファイル `Content/PlateauGameSample/MainMap.umap`を開いてPlayすることで実行できます。

## ライセンス
ライセンスは[LICENSE.md](/LICENSE.md)を参照してください。

## 注意事項
- 本リポジトリの内容は予告なく変更・削除する可能性があります。
- 本リポジトリの利用により生じた損失及び損害等について、国土交通省はいかなる責任も負わないものとします


