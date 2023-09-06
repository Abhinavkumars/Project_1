#include<iostream>
const int ROWS = 3;

const int COLS = 3;

char arr[ROWS][COLS] = { 
{'_', '_', '_'}, 
{'_', '_', '_'}, 
{'_', '_', '_'} 
};
 
 
 void delay(unsigned int mseconds){

    clock_t goal = mseconds + clock();
    while (goal > clock());
}



int
main ()
{
  
std::cout << "                 .__\n";
  delay(100);
std::cout << "__  _  __ ____  |  |   ____    ____    _____    ____   \n";
  delay(100);
std::
    cout <<
    "\\ \\/ \\/ // __ \\ |  |  / ___\\  /  _ \\  /     \\ / __ \\  \n";
  delay(100);
std::
    cout << " \\     / \\___/  |  |__\\ \\___ (  <_> )|  Y Y   \\ ___/  \n";
  delay(100);
std::
    cout <<
    "  \\/\\_/   \\___> |____/ \\_____\\\\____/ |__|_|__/ \\___  > \n";
  delay(100);
/*WELCOME TO TIC TAC TOE*/ 
    std::
    cout <<
    " ___________.___ _________   ___________ _____  _________     ________________________________\n";
  delay(100);
std::
    cout <<
    "\\__    ___/ |   |\\   ___\\    \\__    ___ // _ \\ \\__  __ \\      \\__    ___/|   _    | _________/\n";
  delay(100);
std::
    cout <<
    "   |    |   |   ||   \\          |    |  / /\\  \\ \\  \\  \\_\\       |    |   |  | |   | |________ \n";
  delay(100);
std::
    cout <<
    "   |    |   |   ||    \\___      |    | /   |   \\ \\  \\____       |    |   |  |_|   | |_________\n";
  delay(100);
std::
    cout <<
    "   |____|   |___|\\_______/      |____|\\____|____/\\________/     |____|   \\________//_________/\n";
  delay(400);
std::cout << "To Play the Game of Tic Tac Toe Press 1\n";
  
 
 
 
 
 
int x, a, c = 0, i, j;
  
int play_1 = 0, play_2 = 0, draw = 0;
  
 
std::cin >> x;
  
 
if (x == 1)
    {
      
std::cout << "You Can Start Playing The Game ";
      
std::cout << "Player 1 Enter the chosen place as given below \n";
      
std::cout << " 00|01|02 \n";
      
std::cout << " --|--|-- \n";
      
std::cout << " 10|11|12 \n";
      
std::cout << " --|--|-- \n";
      
std::cout << " 20|21|22 \n";
      
std::cout << "Enter the address which you want to insert X or O\n";
    
 
}
  
 
for (i = 0; i < ROWS; ++i)
    {
      
for (j = 0; j < COLS; ++j)
	{
	  
std::cout << arr[i][j] << " ";
	
}
      
std::cout << "\n";
    
}
  
 
 
std::cout << "Enter Value Player 1:-\n";
  
for (int k = 0; k < 9; k++)
    {
      
 
	// std::cout<<"Enter Value Player 1:-\n";
	std::cin >> a;
    
      
if (k % 2 == 0)
	
std::cout << "Enter Value Player 2:-\n";
      
      else
	
std::cout << "Enter Value Player 1:-\n";
      
j = a % 10;
      
i = a / 10;
      
c++;
      
if (c % 2 == 1)
	
arr[i][j] = 'X';
      
      else
	
arr[i][j] = 'O';
      
for (int i = 0; i < ROWS; ++i)
	{
	  
for (int j = 0; j < COLS; ++j)
	    {
	      
std::cout << arr[i][j] << " ";
	      
if (arr[i][0] == 'X' && arr[i][1] == 'X' && arr[i][2] == 'X'
		   || arr[0][j] == 'X' && arr[1][j] == 'X' && arr[2][j] == 'X'
		   || arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X'
		   || arr[0][2] == 'X' && arr[1][1] == 'X'
		   && arr[2][0] == 'X')
		
		{
		  play_1++;
		  
break;
		}
	      
	      else if (arr[i][0] == 'O' && arr[i][1] == 'O'
		       && arr[i][2] == 'O' || arr[0][j] == 'O'
		       && arr[1][j] == 'O' && arr[2][j] == 'O'
		       || arr[0][0] == 'O' && arr[1][1] == 'O'
		       && arr[2][2] == 'O' || arr[0][2] == 'O'
		       && arr[1][1] == 'O' && arr[2][0] == 'O')
		
		{
		  play_2++;
		  
break;
		
}
	      
	      else
		
draw++;
	    
 
 
}
	  
std::cout << "\n";
	
}
      
if (play_1 > 0 || play_2 > 0)
	
break;
    
}
  
if (play_1 > 0)
    
std::cout << "Player 1 Wins\n";
  
  else if (play_2 > 0)
    
std::cout << "Player 2 Wins\n";
  
  else if (draw >= 8)
    
std::cout << "Its a draw";

 
 
 
}


