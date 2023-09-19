/*	[Insert header here]
  */
#include <stdio.h>
#include <string.h>
int main(){
	
	//Variable declarations
	int weight, height, bmi, goAgain = 1;
	char weightStatus[70];

	//Beginning intro text
	printf("\n\n bmi Calculator \n\n"); // 15 spaces
	printf("Body Mass Index (bmi) is a ratio of weight to height.\n\n");
	printf("Keep in mind that muscle weighs more than fat, so bmi is \n"
	"not always the best metric of a healthy weight.\n\n\n");

	//This loop executes the bmi test until the user specifies to quit via inputting 0 for try again scanf
	while(goAgain){
			
		switch(goAgain){
			case 0:
					//not really needed to do anything as program quits when case is 0
			break;
			case 1:
					//go again case
					//Input get weight and height
					printf("\nEnter your weight in pounds (as an integer): ");
					fscanf(stdin, "%d", &weight);

					printf("Enter your height in inches (as an integer): ");
					fscanf(stdin, "%d", &height);
					
					//Get bmi and print it
					bmi = (weight * 703) / (height * height);
					printf("\nYour bmi is %d.\n", bmi);					
					
					//insert the if else statement stuff
					//This tells you the various readings based on your bmi
					if(bmi < 19){
						strcpy(weightStatus,"considered underweight");
					}else if(bmi >= 19 && bmi <= 24){
						strcpy(weightStatus, "a healthy weight");
					}else if(bmi >= 25 && bmi <= 29){
						strcpy(weightStatus, "considered overweight");
					}else if(bmi >= 30){
						strcpy(weightStatus, "considered obese");
					}
					
					printf("According to your bmi, your weight of %d lbs is %s", weight, weightStatus); 				
		
					printf("\n- - - - - - - - - - - - - - - - - - - - - "
					"- - - - - - - - - - - -\n\n"); // 21 dashes and then 12 dashes

					printf("Enter 1 to go again or 0 to quit: ");
					scanf("%d", &goAgain);

					//quick fix for formatting for gradescope 
					//since no linebreak should be added for invalid input cases
					if( (goAgain == 0) || (goAgain == 1) ){
						printf("\n");
					}
			break;
			default:	//if invalid input given to try again input then ask again and tell them that its invalid
				
					printf("Enter 1 to go again or 0 to quit: ");
					scanf("%d", &goAgain);
			
			break;
		}
	}

	return 0;
}   
