# CppStatePattern
1. 状態を変化させたいオブジェクトに`BaseState`を継承する
   1. - `Execute`, `Update`, `Exit`それぞれを実装する
1. それらオブジェクトを`StateProcessor`に登録する
2. `StateProcessor->ChangeState()`を呼び、状態を切り替える