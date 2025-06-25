#include <iostream> // required for input/output operations like 'std::cout' and 'std::cin'
#include <string> // required for string manipulation, used for'std::string' variables


/*
 * This program calculates the total amount spent by a customer at "VegOut"
 * for purchasing cheese and potato pies.
 *
 * It prompts the user for input regarding the type of pie purchased (cheese or potato)
 * and the quantity of each. The cost per pie is hardcoded within the program.
 *
 * Finally, it outputs the total amount spent and determines if the customer
 * is within a pre-defined budget of $100.
 *
 * Example:
 * If a customer buys 2 potato pies at $16.50 each and 3 cheese pies at $22.50 each:
 * totalSpent = (2 * 16.50) + (3 * 22.50);
 * The program would then output the calculated 'totalSpent'.
 */

int main() {

	// Declare variables to store user input and calculated totals.
	// 'std::string' is used for text input (like "yes" or "no").
	// 'float' is used for monetary values to allow for decimal points.
	// 'int' is used for whole numbers (like the quantity of pies).

	std::string CPies; // Stores user's response: "yes" if cheese pies were bought, "no" otherwise.
	std::string PPies; // Stores user's response: "yes" if potatoe pies were bought, "no" otherwise.

	float totalSpentCType; // Stores the total cost of cheese pies.
	float totalSpentPType; // Stores the total cost of potatoe pies.
	float totalSpent = 0.0; // Stores the grand total spent by the customer.Initialized to 0.0.

	int numOfCPies; // Stores the number of cheese pies purchased.
	int numOfPPies; // Stores the number of potatoe pies purchased.



	// Prompt the user to indicate if they purchased a cheese pie.
	std::cout << "Did you purchase a cheese pie? (yes/no)"; // Clearer prompt for user.
	std::cin >> CPies;  // Read user's response into CPiesResponse.

	// Check if the user bought cheese pies.
	if (CPies == "yes") {
		std::cout << "How many did you buy? ";
		std::cin >> numOfCPies; // Read the number of cheese pies.

		// Prompt the user to indicate if they purchased a potato pie (even if they bought cheese pies).
		std::cout << "Did you purchase a potato pie? (yes/no)"; 
		std::cin >> PPies; // Read user's response into PPiesResponse.


		// Nested if-else to handle potato pie purchase after cheese pies.
		if (PPies == "yes") {
			std::cout << "How many did you buy? "; 
			std::cin >> numOfPPies; // Read the number of potatoe pies.


			// Calculate total spent for each pie type and the grand total.
			totalSpentCType = (numOfCPies * 22.50); // Price of cheese pie is $22.50
			totalSpentPType = (numOfPPies * 16.50); // Price of potato pie is $16.50
			totalSpent = (totalSpentCType + totalSpentPType); 


			// Display the total spent.
			std::cout << "Your total is: $" << totalSpent << std::endl;
		}

		// If only cheese pies were bought.
		else {
			totalSpent = (numOfCPies * 22.50);
			std::cout << "Your total is: $" << totalSpent << std::endl;
		}

	}
	// If no cheese pies were bought, check for potato pies.
	else {
		std::cout << "Did you purchase a potato pie? (yes/no)";
		std::cin >> PPies;

		if (PPies == "yes") {
			std::cout << "How many did you buy? ";
			std::cin >> numOfPPies;

			totalSpent = (numOfPPies * 16.50); // Calculate total for potato pies only.
			std::cout << "Your total is: $" << totalSpent << std::endl;

		}

		// If neither cheese nor potato pies were bought.
		else { std::cout << "You bought no pies" << std::endl; }

		
	}

	// --- Budget Check ---
		// This section checks if the calculated totalSpent is within the budget.
		// The budget is hardcoded as $100.
	if (totalSpent <= 100) {
		std::cout << "You Are Within Budget ;)" << std::endl;
	}

	else {
		std::cout << "You Are Over Budget :(" << std::endl;
	}
	return 0; // Indicate that the program executed successfully.
}