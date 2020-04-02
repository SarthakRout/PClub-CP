# PClub-CP
This repo contains a complete competitive programming problem with sample cases, test cases and a solution file.

# Ashwamedha Yajna
In the ancient times, the glorious kings of Bharat performed many rituals for prosperity of their kingdoms , good-will of their family, or to please the priests so that they would grant some boon.  
In the Ashwamedha Yajna, the horse is left free in the Ishanya(North-East) direction with the army of the King. Whichever the kingdom the horse steps on, the king of that kingdom must either accept lordship of the King or fight to protect their kingdom. This ritual is symbolises that the King is unchallenged in the whole world.  
It was said that whoever conducted 100 Ashwamedha Yajna would be known as King of Gods. So, naturally Indra(with the help of other gods) always tried to hinder the Yajna.  
You are Chakrabarti Samrat :crown: Yash Chandnani .  
You have conducted Ashwamedha Yajna successfully 99 times. For the 100th time, Indra has decided to not let you win. He has placed some of his own soldiers in your path who are more stronger by a factor of 'D'. Only that army will win whose total strength is strictly more and after each battle the King's army loses the army equivalent to strength of opposing army. (Atleast one soldier should remain standing to claim that land).   
You are given an array denoting the area to be captured. Each unit box has equal unit area. Your horse is present at the bottom left position and will step into the bottom leftmost position. The horse can only move in North or East direction. You can move until you are dead or you reach the topmost right corner signifying the end of land.  
Can you become the King of Gods?
## Input 
* The first line consists of three integers: Number of normal soldiers that you have, 'S', Strength of divine soldier 'D', Target Area 'T'
* The second line consists of two integers : Number of rows 'R', Number of columns 'C'
* Then 'R' lines follow with 2 * 'C' integers each denoting the number of normal enemy soldiers, 'N<sub>i</sub>' and number of divine enemy soldiers, 'D<sub>i</sub>'.
## Output
You have to print "YES" if you can become the King of Gods else print "NO".
## Constraints
* 1<= D <= 20
* 0<=N, N<sub>i</sub>, D<sub>i</sub> <=10<sup>9</sup>
* 0<=T<R+C
* 1<=R, C<=10<sup>3</sup>
* 0<=S<=10<sup>18</sup>
## Example
### Input
8 2 2  
2 2  
1 1  2 0  
2 1  1 2  
### Output
YES
### Explanation
The horse starts from {2,1} area. If the horse goes right east, it is stopped by in the 2nd step at {1,2}. So, only one area is occupied but if it goes up north it is stopped at the opposite corner {2,0} where it occupies 2 units of area. Here {n,d} represents the state of the box and not its coordinate.
![Array Structure](https://ibb.co/L0bGp9X)
### Input
446960 10 4  
2 4  
4369 14877 13318 9296 16844 17659 29815 5912   
18280 11149 9935 26920 17462 20846 138 6425   
### Output
NO
### Explanation 
Whichever path you take, you get stopped after getting to {13318,9296}, you lose your fight at {16844,17659}. You get a maximum of 3 unit areas which is less than 4.
