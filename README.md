### Incremental Game:


This C++ program simulates a turn-based game between Alice and Bob played over multiple test cases. For each test case, the integers `X`, `Y`, and `K` are input, representing the maximum number of coins Alice can remove from two piles (`X` from pile A and `Y` from pile B), and `K` being the maximum number Alice is allowed to remove in her first move. Alice makes the first move by picking any number of coins from either pile, as long as the number is ≤ `K`. After that, Bob must respond by picking a strictly higher number of coins than Alice's move, from either pile. This continues with increasing move sizes.

The program checks whether Alice can make a first move that forces Bob into a position where he cannot respond legally (i.e., no higher number of coins than Alice’s move is available in either pile). If such a first move exists, Alice wins; otherwise, Bob is guaranteed to have a valid move and wins. For each test case, the program outputs either "Alice" or "Bob" based on whether Alice has a winning strategy.
