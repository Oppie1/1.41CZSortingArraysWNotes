#include<stdio.h>
#include<stdlib.h>	
#include<ctype.h>
#include<string.h>
#include<math.h>
#include <time.h>


int main()
{
	srand(time(NULL));

	int i, temp, swapped; //Storage varrialbles 
	const int howMany = 3; //reduced to 3 to concentrate on flow and main points/algorhythem (array/index #)
	int goals[howMany]; //This sets the array for goals here -->[23,16,25]

	for (i = 0; i < howMany; i++) {
	//1st pass/iteration starts with "0"
	//1st pass i=0 0 < 3- True. Execute next line of code 
	//2nd pass i= 1 1<3- True. Execute next line of code
	//3rd iteration i =2 2<3 True. Execute next line of code 
	//4th iteration i=3 3<3? False end for control loop and move on to next step of code
		goals[i] = (rand() % 25) + 1; 
	//1st pass. Divide take remainder add 1. 1st number 23 (store 23) in 1st element (human-1). Index(computer-0)
	// put 23 in index array "int goals[howMany] --> [23, i, i] //
	//increment 0++-->0+1= 1 --> 2nd iteration starts with i = 1
	//2nd pass. Divide take remainder add 1. 2nd # 16 (store 16 in 2nd element (human-2). Index(computer-1)
	//  put 16 in index array "int goals[howMany] --> [23,16, i] //
	//increment 1++-->1+1= 2 --> 3rd iteration starts with i = 2
	//3rd pass Divide take remainder add 1. 1st number 16 (store 16) in 1st element (human-1). Index(computer-0)
	//// put 25 in index array "int goals[howMany] --> [23, 16, 25] //
	//increment 2++=1+1=3. 4th iteration is i=3
	}

	printf("Original List\n"); //Print out top line
	for (i = 0; i < howMany; i++) { // scroll through 0-2 (computer) 1-3 (human)  and execute code until 3<3? False
		printf("%d \n", goals[i]); // print #of goals to the screen from #'s stored in "goals[i(howMany)]"[23,i,i] array
	//Print out one line at a time and rerun so:i=0 -> 0<3-> print index "0" from array [23,16, i]
	// After icrement (0++ -> 0+1=1-> 2ns iteration i=1 and proceed 1<3 true execute rest of codebloack
	//Print out 2nd number in array (index -1) [23,16*,25] print out 25 to screen in third row
	//increment 1++=1 ->1+1 =2-> 3rd sapot in array [23,16,25]
	}

	while (1) { //"1" meaures "true" So starts out true. Move to nested for and if control statments

		swapped = 0;//This starts out as nothing was swapped so test. Clears buffer?

		for (i = 0; i < howMany - 1; i++) {
		//1st pass = 0<3-1->0<2? True. Proceed to nested if statment
		//1st pass- Now increment step i++ = 0+1= 1 i in 2nd iteration is 1. 2nd pass i =1.
		//2nd pass i=1. 1<2

			if (goals[i] > goals[i + 1]) {
		//1st pass (goals[0,23]>goals[0+1=1,16) True --> Another way to look at it -->23[0] >16[1].
		//Second pass compare i =1 > i+1(2nd spot human 3 spot computer index. This compares indexes/spots
		//So compare "new" second spot (23) with third slot (25) so is 23<25? False. If control stops and moves to next step
				temp = goals[i]; //Put 23 in temp varriable for safe keeping while we do the swap from index 0
				goals[i] = goals[i + 1];//Now take whats in index 0(16) and make it equal to index 1. Overwrite 23.
		//goals[i+1] --> basically says move to index(computer) 1 (human 2nd spot) in array
		//Now array looks like this[16,16,25]
				goals[i + 1] = temp; //Replace spot in array goals[0+1] (index 1 human 2) with temp variable
		//Now we retrive the value in the temp variable(memory) and put back in array in 2nd spot. i is spot in array.
		//Now that if statment has executed the array looks like this [16,23,25]
				swapped = 1;// Was a swap perforemed (1 means true in programing - like a flag) re-run 
		//code block (go to top of if statment) and run if statment
	
			} 

		}

		if (swapped == 0) { //Becuase above if statment was fals the "swapped" amount == 0.
		//Which means it didnt swap anything.  "0" is like a "false" and "1" is a true flag
			break;// This "breaks" out of if loop and moves to next step.
		}

	}

	printf("\nSorted List \n");//Print out underneath above output above sortered list. A header to the sorted list

	for (i = 0; i < howMany; i++) { //This loops through the 3 now sorted elements and prints them out line by 
		// line from now sorted goals[howMany] array--> goals[16,23,25]
		printf("%d \n", goals[i]); //Prints out line, adds line and print next element in the array
	}

	return 0; //Program finishes! :)
}

/*Program Output
Original List
23
16
25

Sorted List
16
23
25

*/
