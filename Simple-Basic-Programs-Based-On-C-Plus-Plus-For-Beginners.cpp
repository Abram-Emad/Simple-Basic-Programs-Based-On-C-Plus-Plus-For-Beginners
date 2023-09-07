#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "------------------------------------------------------------------------" << endl;
	cout << "displaying the squard of the numbers from one to 10 using for loop" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	int p;
	for (p = 1; p <= 10; p++)
		cout << "The number is:- " << p << "\t\t"
			 << "The squared of that number is:- " << p * p << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "displaying the squard of the numbers from one to 10 using while loop" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	int o = 1;
	while (o <= 10)
	{
		cout << "The number is:- " << p << "\t\t"
			 << "The squared of that number is:- " << p * p << endl;
		o++;
	}
	cout << "------------------------------------------------------------------------" << endl;
	cout << "displaying the squard of the numbers inversly from 10 to 1 using for loop" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	int l;
	for (l = 10; l >= 1; l--)
		cout << "The number is:- " << l << "\t\t"
			 << "The squared of that number is:- " << l * l << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "displaying the squard of the numbers inversly from 10 to 1 using while loop" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	int k = 10;
	while (k >= 1)
	{
		cout << "The number is:- " << k << "\t\t"
			 << "The squared of that number is:- " << k * k << endl;
		k--;
	}
	cout << "------------------------------------------------------------------------" << endl;
	cout << "displaying the word hello five times using for loop" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	int i;
	for (i = 1; i <= 5; i++)
		cout << "hello" << endl;
	cout << "that's all" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "displaying the word hello five times using while loop" << endl;
	cout << "-------------------------------------------------------" << endl;
	int u = 1;
	while (u <= 5)
	{
		cout << "hello" << endl;
		u++;
	}
	cout << "that's all" << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "asking the user to enter any number then print out the squared of that number using while loop" << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	int t = 1;
	while (t != 0)
	{
		cout << "please enter the number you want to find the squaed for it" << endl;
		cin >> t;
		cout << "The number is:- " << t << "\t\t"
			 << "The squared of that number is:- " << t * t << endl;
	}
	cout << "-------------------------------------------------------" << endl;
	cout << "displaying five numbers entered by the user using for loop" << endl;
	cout << "-------------------------------------------------------" << endl;
	int a[5], r;
	cout << "Enter any five numbers do you want" << endl;
	for (r = 0; r < 5; r++)
		cin >> a[r];
	cout << "The numbers that you entered are:- ";
	for (r = 0; r < 5; r++)
		cout << a[r] << " " << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "displaying the minimumm of two numbers entered by the user" << endl;
	cout << "----------------------------------------------------------" << endl;
	int e, w;
	cout << "please enter any two numbers do you want" << endl;
	cin >> e >> w;
	if (e > w)
		cout << e << "is the first numbers that you are entered and it greater than " << w << " which is the second number that you are entered" << endl;
	else if (e < w)
		cout << e << "is the first numbers that you are entered and it less than " << w << " which is the second number that you are entered" << endl;
	else
		cout << "The two numbers that you are entered are equal" << endl;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "determining if the two numbers entered by the user are equal or not" << endl;
	cout << "---------------------------------------------------------------------" << endl;
	int s, q;
	cout << "please enter any two numbers do you want" << endl;
	cin >> s >> q;
	if (s == q)
		cout << s << "is the first numbers that you are entered and it equal to " << q << " which is the second number that you are entered" << endl;
	else
		cout << e << "is the first numbers that you are entered and it aren't equal to " << w << " which is the second number that you are entered" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "determining the average of two numbers entered by the user" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	int num2, num1, average;
	cout << "please enter any two numbers do you want" << endl;
	cin >> num1 >> num2;
	average = (num1 + num2) / 2;
	cout << "The average of the two numbers that you are entered is:- " << average << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << "determining the solution of the following equation (x^5 + x + 1)" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	int base, exponent = 5, result;
	cout << "please enter the base do you want to use for solving the equation" << endl;
	cin >> base;
	result = base + pow(base, exponent) + 1;
	cout << "The solution of the equation is:- " << result << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "determining the sqrt of the number entered by the user" << endl;
	cout << "--------------------------------------------------------" << endl;
	int number;
	cout << "please enter any number do you want to find the sqrt for it" << endl;
	cin >> number;
	cout << "The sqrt of the number that you are entered is:- " << sqrt(number) << endl;
	cout << "-------------------------------------------------------------------" << endl;
	cout << "determining the gradr of the student accroding to it's score" << endl;
	cout << "-------------------------------------------------------------------" << endl;
	int score;
	cout << "please enter your grade" << endl;
	cin >> score;
	if (score <= 100 && score >= 95)
		cout << "A+" << endl;
	else if (score < 95 && score >= 90)
		cout << "A" << endl;
	else if (score < 90 && score >= 85)
		cout << "A-" << endl;
	else if (score < 85 && score >= 80)
		cout << "B+" << endl;
	else if (score < 80 && score >= 75)
		cout << "B" << endl;
	else if (score < 75 && score >= 65)
		cout << "C+" << endl;
	else if (score < 65 && score >= 60)
		cout << "C" << endl;
	else if (score < 60 && score >= 55)
		cout << "D+" << endl;
	else if (score < 55 && score >= 50)
		cout << "D" << endl;
	else
		cout << "sorry to tell you this but you are fail" << endl;
	cout << "---------------------------------------------------------------------------------- \n";
	cout << "Printing the sequence numbers bettwen two numbers \n";
	cout << "---------------------------------------------------------------------------------- \n";
	int first_number, second_number, i;
	cout << "please enter your first number = " << endl;
	cin >> first_number;
	cout << "please enter your second number = " << endl;
	cin >> second_number;
	if (first_number <= second_number)
	{
		cout << "The numbers bettwen the two numbers that you are entered"
			 << " ";
		for (i = first_number; i < second_number; i++)
			cout << i << " ";
		cout << endl;
	}
	else
	{
		cout << "The numbers bettwen the two numbers that you are entered"
			 << " ";
		for (i = second_number; i <= first_number; i++)
			cout << i << " ";
		cout << endl;
	}
	cout << "------------------------------------------------------------------------- \n";
	cout << "caculate the average with specfid maximum numbers entered by the user \n";
	cout << "------------------------------------------------------------------------- \n";
	int maximum;
	double y, x = 0, average;
	cout << "please enter the maximum of the average" << endl;
	cin >> maximum;
	for (int u = 1; u <= maximum; u++)
	{
		cout << "enter the number you want = " << endl;
		cin >> y;
		x = x + y;
	}
	average = x / maximum;
	cout << "The average of the " << maximum << " numbers you entered is " << average;
	cout << "---------------------------------------------------------------------------------- \n";
	cout << "Finding the suger paint status where the normal value is bettwen 90 and 120 \n";
	cout << "---------------------------------------------------------------------------------- \n";
	int sugerpaint;
	cout << "please input your suger paint:-";
	cin >> sugerpaint;
	if (sugerpaint > 90 && sugerpaint < 120)
		cout << "your suger paint status is normal";
	else
		cout << "your suger paint status isn't normal \n";
	cout << "----------------------------------------------------------- \n";
	cout << "determining if the number is greater than 100 or not \n";
	cout << "----------------------------------------------------------- \n";
	double number;
	cout << "please enter any number do you want:- \n";
	cin >> number;
	if (number > 100)
		cout << number << "is the number that you are entered is greater than 100" << endl;
	else
		cout << number << "is the number that you are entered is less than 100" << endl;
	cout << "----------------------------------------------- \n";
	cout << "Welcoming to the user \n";
	cout << "----------------------------------------------- \n";
	char name;
	cout << "please enter your name:- ";
	cin >> name;
	cout << "good morning " << name << endl;
	cout << "----------------------------------------------- \n";
	cout << "Calculate the area of triangle:- \n";
	cout << "----------------------------------------------- \n";
	int baselength, height, area;
	cout << "please enter the base length of the triangle:- ";
	cin >> baselength;
	cout << "please enter the hight of the triangle:- ";
	cin >> height;
	area = 0.5 * baselength * height;
	cout << "The area of triangle is:- " << area << endl;
	cout << "----------------------------------------------- \n";
	cout << "Calculate the area of a circle:- \n";
	cout << "----------------------------------------------- \n";
	double diameter, carea, pi = 3.14;
	cout << "please enter the diameter of the circle:- ";
	cin >> diameter;
	carea = pi * pow(diameter, 2);
	cout << "The area of a circle is:- " << carea << endl;
	cout << "----------------------------------------------- \n";
	cout << "Calculate the facorial of a number N:- \n";
	cout << "----------------------------------------------- \n";
	int f, fac = 1;
	cout << "Enter the facorial number:- ";
	cin >> f;
	for (int i = f; i > 1; i--)
		fac = fac * i;
	cout << "The facorial of the number that you are entered is:- " << fac << endl;
	cout << "---------------------------------------------------------------------------------------- \n";
	cout << "Calculate The sum of the two numbers It repeats as many times as the user wishes \n";
	cout << "---------------------------------------------------------------------------------------- \n";
	double fnum, snum, sum;
	char ch;
	do
	{
		cout << "Enter the numbers do you want:-";
		cin >> fnum >> snum;
		sum = fnum + snum;
		cout << "The sum = " << sum << endl;
		cout << "For doing this operation again press y or any letter to exit:- ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << "------------------------------------------------------ \n";
	cout << "Calculate the average of three of test scores It repeats as many times as the user wishes \n";
	cout << "----------------------------------------------------------------------------------------------- \n";
	int score1, score2, score3;
	double Average;
	char again;
	do
	{
		cout << "Enter your three test scores please:- ";
		cin >> score1 >> score2 >> score3;
		Average = (score1 + score2 + score3) / 3.0;
		cout << "The Average of your test scores that you are entered is:- " << Average << endl;
		cout << "For doing this operation again press y or any letter to exit:- ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
	cout << "------------------------------------------------------ \n";
	cout << "Multipling numbers with defing any the maximum values do you want to display \n";
	cout << "--------------------------------------------------------------------------------- \n";
	int num;
	int max;
	cout << "Enter the maximum number of values do you want to display:- ";
	cin >> max;
	cout << "The maximum number of values that you chosed is:- " << max << endl;
	for (num = 1; num <= max; num++)
		cout << "The number is:- " << num << "\t\t"
			 << "The squared of that number is:- " << num * num << endl;
	cout << "------------------------------------------------------ \n";
	cout << "Addition any amount of numbers to each others \n";
	cout << "------------------------------------------------------ \n";
	int g, h;
	for (g = 1, h = 1; g <= 5; g++, h++)
	{
		cout << g << " + " << h << " = " << g + h << endl;
	}
	cout << "------------------------------------------------------ \n";
	cout << "Addition any amount of numbers to each others with defing any the maximum values do you want to display \n";
	cout << "--------------------------------------------------------------------------------------------------------------- \n";
	int num1, num2, maximum;
	cout << "Enter the maximum number of values do you want to display:- ";
	cin >> maximum;
	cout << "The maximum number of values that you chosed is:- " << maximum << endl;
	for (num1, num2; num1 <= maximum; num1++, num2++)
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << "----------------------------------------------------------- \n";
	cout << "Calculating the maximum values in an array of integrs \n";
	cout << "----------------------------------------------------------- \n";
	int size = 10;
	int nums[size], maxi;
	cout << "please enter any 10 numbers do you want";
	for (int u = 0; u < size; u++)
		cin >> nums[u];
	maxi = nums[0];
	for (int u = 1; u < size; u++)
	{
		if (nums[u] > maxi)
			maxi = nums[u];
	}
	cout << "The Maximum = " << maxi << endl;
	cout << "-------------------------------------------------------------- \n";
	cout << "Array of int elements find the sum of odd and sum of even \n";
	cout << "-------------------------------------------------------------- \n";
	int s = 3, odd_sum = 0, even_sum = 0, ar[s] = {10, 25, 30};
	for (int i = 0; i < s; i++)
	{
		if (ar[i] % 2 == 0)
			even_sum = even_sum + ar[i];
		else
			odd_sum = odd_sum + ar[i];
	}
	cout << "sum of even elements is:- " << even_sum << "\t\t"
		 << "sum of odd elements is:- " << odd_sum << endl;
	cout << "------------------------------------------------------ \n";
	cout << "displays a right direction pyramid of X on the screen \n";
	cout << "------------------------------------------------------ \n";
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		cout << endl;
	}
	cout << "------------------------------------------------------ \n";
	cout << "displays a right direction inverted pyramid of X on the screen \n";
	cout << "------------------------------------------------------ \n";
	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}