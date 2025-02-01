sequenceDiagram
    participant User as ユーザー
    participant Program as プログラム
    participant Input as 入力処理
    participant Search as 探索処理
    participant Output as 出力処理
    
    User ->> Program: 実行開始
    Program ->> Input: N, M の入力
    Input ->> Program: N, M を格納
    Program ->> Input: S の入力
    Input ->> Program: S を格納
    Program ->> Input: T の入力
    Input ->> Program: T を格納

    Program ->> Search: すべての (a, b) を全探索
    loop 各 a, b について
        Search ->> Search: T が S[a:a+M, b:b+M] と一致するか判定
        alt 一致する場合
            Search ->> Output: a+1, b+1 を出力
            Output ->> Program: 出力完了
            Program ->> User: a+1, b+1 を表示
            Program ->> Program: プログラム終了
        else 一致しない場合
            Search ->> Search: 次の (a, b) へ
        end
    end
