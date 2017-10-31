Your bot is playing a Block Game which contains a one dimensional array of blocks. You need to program it, in order to make it win this game. Initially your bot is standing at _**block 0**_ of an _**n-element**_ block pathway named _**blockGame**_. Each block is numbered from _**0**_ to _**n-1**_ & they can contain either a pit or a solid pathway. If a block is valued _**1**_ it implies that it contains a Pit, else if it is valued _**0**_ it implies that it contains a solid pathway. From some block _**i (where 0 <= i < n)**_, your bot can perform one of the following moves:
	
* _**Move Backward**_:	If block  _**i-1**_ exists and contains a solid pathway, your bot can walk back to cell _**i-1**_.
* _**Move Forward**_:	If cell  _**i+1**_ contains a solid pathway, your bot can walk to cell _**i+1**_. If cell  _**i+leap**_ contains a solid pathway, your bot can jump to cell _**i+leap**_. If your bot is standing in cell  _**n-1**_ or the value of _**i+leap >= n**_, your bot can walk or jump off the end of the block and win the game.

In other words, your bot can move from block  _**i**_ to block _**i+1**_, _**i-1**_, or _**i+leap**_ as long as the destination block is a solid block. If the destination block is greater than _**n-1**_, you win the game.

**Input Format:**

* The first line contains an integer, **q**, denoting the number of queries. 
* The  **2.q** subsequent lines describe each query over two lines:
	1. The first line contains two space-separated integers describing the respective 
values of  _**n**_ and _**leap**_.
	2. The second line contains  _**n**_ space-separated binary integers (i.e., zeroes and ones) describing the respective values of _**block 0, block 1, ...., block n-1**_. 
_**Note:**_ It is guaranteed that the value of _**block[0]**_ is always _**0**_.
    
**Output Format:**
	Print **YES** if your bot can win the game; otherwise, print **NO**.

**Sample Input:**
	
``` 4
    5 3
    0 0 0 0 0
    6 5
    0 0 0 1 1 1
    6 3
    0 0 1 1 1 0
    3 1
    0 1 0
```
**Sample Output:**
```	
    YES
    YES
    NO
    NO
```
Happy Coding! :+1:
