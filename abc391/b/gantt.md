gantt
    title グリッド探索プログラムの処理フロー
    dateFormat  HH:mm:ss
    axisFormat  %S 秒

    section 入力処理
    N, M の入力 :done, task1, 00:00:01, 1s
    S の入力 :done, task2, 00:00:02, 1s
    T の入力 :done, task3, 00:00:03, 1s

    section 探索処理
    (a, b) の全探索開始 :active, task4, 00:00:04, 2s
    各 (a, b) についてTと比較 :active, task5, 00:00:06, 4s
    一致チェック (ネストしたループ) :active, task6, 00:00:10, 4s
    解が見つかった場合は即終了 :done, task7, 00:00:14, 1s

    section 出力処理
    一致した (a+1, b+1) を出力 :done, task8, 00:00:15, 1s
    プログラム終了 :done, task9, 00:00:16, 1s