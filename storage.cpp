#include <iostream>
using namespace std;

//*******************************version Test Conditional ***************************************
///// int main() {
//     if (__cplusplus == 201703L)
//         cout << "C++17/n";
//     else if (__cplusplus == 201402L)
//         cout << "C++14/n";
//     else if (__cplusplus == 201103L)
//         cout << "C++11/n";
//     else if (__cplusplus == 199711L)
//         cout << "C++98/n";
//     else
//         cout << "pre-standard C++/n";
    
// }

// Homework 2 problem 2// *********************************************************
// int main()
// {
//     string studentName1;
//     string studentName2;
//     string id1;
//     string id2; 
//     double examGrade1;
//     double examGrade2;


//     cout<< "What is student 1 name:\n";
//     cin>> studentName1;
//     cout<< "His id:\n";
//     cin>> id1;
//     cout<< "His math exam grade:\n";
//     cin>> examGrade1;
    
//     cout<< "What is student 2 name:\n";
//     cin>> studentName2;
//     cout<< "His id:\n";
//     cin>> id2;
//     cout<< "His math exam grade:\n";
//     cin>> examGrade2;

//     cout<< "Students grade in math\n";
//     cout<<studentName1<<" (with id  "<<id1<<") got grade: "<<examGrade1<<"\n";
//     cout<<studentName2<<" (with id  "<<id2<<") got grade: "<<examGrade2<<"\n";
//     cout<< "Average grade is "<<(examGrade1 + examGrade2) / 2;
    
//     return 0;
// }

// Homework 2 problem 3; my version*************************************************************************

// int main()
// {
//     int a, b, c, d, e, f, g, h;
//     cout<<"Please input 8 numbers:\n";
//     cin>> a>> b>> c>> d>> e>> f>> g>> h;
//     cout<< a + c + e + g <<"\n";
//     cout<< b + d + f + h <<"\n";

//     return 0;
// }
// Mostafa version
// int main()
// {
//     int even1, even2, even3, even4;
//     int odd1, odd2, odd3, odd4;

//     cin>> odd1>>even1;
//     cin>> odd2>>even2;
//     cin>> odd3>>even3;
//     cin>> odd4>>even4;

//     int evenSum {even1 + even2 + even3 + even4};
//     int oddSum {odd1 + odd2 + odd3 + odd4};

//     cout<<evenSum<< " " <<oddSum<< "\n";

//     return 0;
// }

// Homework 2 problem 5 SWAPPING 2 NUMBERS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// My Solution

// int main() {
//     int num1, num2, num3 = -1;

//     cin>>num1>>num2;

//     num3 = num2 - num1;
//     num1 = num2;
//     num2 = num1 - num3;
    
//     cout<<num1<<" "<<num2<<endl;

//     return 0;
 
// }

//Proffessor Solution

// int main() {
//     int num1, num2, num3 = -1;

//     cin>>num1>>num2;

//     num3 = num2;
//     num2 = num1;
//     num1 = num3;

//     cout<<num1<<" "<<num2<<endl;
    
//     return 0;
// }

// SWAPPING 3 NUMBERS *************************************************************************************

// int main() {
//     int a, b, c, d;

//     cin>>a>>b>>c;

    
//     d = a;
//     a = b;
//     b = c;
//     c = d;

//     cout<<a<< " " <<b<< " " <<c<<endl;
    
//     return 0;

// }


//***************************************IF ONE INT IS -1/1*************************************************
// int main() {
//     int a, b;

//     cin>>a>>b;
    
//     int equ_is_1 = a * a;
//     int equ_is_neg_1 = 2 * a + 1;

//     int is_1 = (b + 1) / 2;
//     int is_neg_1 = 1 - is_1;

//     cout<<is_1 * equ_is_1 + is_neg_1 * equ_is_neg_1; ******************* BOOLEAN EQUATION

//     return 0;
// }

// homework 2 problem 8: Mine **************************** 1+2+3+4+5+6+7+8+9*****************************

// int main() {
//     double n;
//     cin>>n;

//     double addIt = (n + 1.0) * (n / 2.0);

//     cout<<addIt;"\n";
//     return 0; 
// }

// Instructors

// int main() {
//     int n;
//     cin>>n;

//     cout<< n * (n + 1) / 2;
//     return 0;
// }


// EVEN ODD USING %2 %10 & /2**********************************************************

// int main() {

// 	int num;
// 	cin >> num;

// 	// Is even using %2
// 	bool is_even1 = (num % 2 == 0);

// 	// is even using /2
// 	double by2 = (double) num / 2.0;// this is either X.0 or X.5  (try 10, 11)
// 	by2 = by2 - (int) by2;// Remove X. This is now either 0 (for even) or 0.5 (for odd)
// 	bool is_even2 = by2 == 0;

// 	// is even using %10
// 	int last_digit = num % 10;	// even last digit is 0, 2, 4, 6, 8
// 	bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;

// 	return 0;
// }

// ADDS THE LAST 3 DIGITS OF A LARGE NUMBER************************************************************

// int main () {
// 	int n;

// 	cin>>n;

// 	int last1 = n % 10;
// 	n /= 10; 
	
// 	int last2 = n % 10;
// 	n /= 10; 
	
// 	int last3 = n % 10;
// 	n /= 10; 

// 	cout<< last1 + last2 + last3 << "\n"; 

// 	return 0;
// }

// PRINT THE FOURTH NUMBER******************************************

// int main() {
// 	int x;

// 	cin>>x;

// 	int dig4 = x / 1000;
// 	int ans = dig4 % 10;

// 	cout<<ans; "\n";

// 	return 0;

// }
///////////////////////////INSTRUCTOR VERSION////////////////////////////////////
// int main() {

// 	int n;
// 	cin >> n;

// 	// /1000 => removes last 3 digits
// 	// %10 get next digit = 4th
// 	cout << (n / 1000) % 10 << "\n";

// 	return 0;
// }

/// PRINT ONLY REMAINDER*******************************************************************

// int main() {
// 	double a, b;
// 	cin>>a>>b;

// 	double x = a/b;
// 	int y = (int)x;
// 	double ans = (y - x) * -1;

// 	cout<<ans;"\n";

// 	return 0; 
// }

// INSTRUCTOR VERSION ***********************************************************************

// int main() {

// 	double a, b;
// 	cin>>a>>b;

// 	double result = a/b;

// 	cout<<result - (int)result;

// 	return 0;
// }

// PRINT % WITHOUT USING %

// int main() {
// 	int a, b;
// 	double c {1.0};
// 	cin>>a>>b;

// 	double ans1 = c*a/b;
// 	int ans2 = (int)ans1;
// 	double ans3 = (ans1 - ans2) * b;


// 	cout<<ans3;"\n";
//***********************************RE FIGURE!!!!
	
// 	// cout<<(ans1 - (int)ans1 * 12)<<"\n";
	
// 	return 0;
// }
//********************* INSTRUCTORS VERSION*****************
// int main() {

// 	int n, m;
// 	cin >> n >> m;

// 	// let's try 13/5
// 	// 13/5 = 2  [2 complete units, each is 5]
// 	// 2*5 = 10  [total complete units]
// 	// Reminder is 13-10 = 3. This number generates the fractional part
// 	int result = n - (n / m) * m;

// 	cout << result << " " << n % m << "\n";

// 	return 0;
// }

//IF EVEN PRINT 100/ IF ODD PRINT 7*****************************************************

// int main () {
// 	int a;
// 	cin>>a;

// 	// int ans1 = a % 2;
// 	// int ans = ans1 + 100 - (94 * ans1);



// 	cout<<(a % 2) + 100 - (94 * (a % 2)) <<"\n";
// 	return 0;
// }

// INSTRUCTOR VERSION**********************************************************************

// int main() {

// 	int n;
// 	cin >> n;

// 	int is_even = n % 2 == 0;
// 	int is_odd = 1 - is_even;

// 	// formula of 2 parts: only one of them will be activated
// 	int result = is_even * 100 + is_odd * 7;

// 	cout<<result<<"\n";

// 	return 0;
// }


//DATE CALCULATER FOR MODIFIED CALENDER ***************************************************************

// int main() {
// 	int n;
// 	cin>>n;

// 	int years = n / 360;
// 	int months = (n % 360) / 30;
// 	int days = (n % 360) % 30;
	
// 	cout<<years<< " " <<months<< " " <<days;"\n";

// 	return 0;
// }

//syntax for if / else if / else*&************************************************************************ 

// int main() {
//     int salary;
//     cin>>salary;

//     if (salary < 1000)
//         cout<<"You are poor\n";
//     else if (salary>= 1000 && salary < 20000)
//         cout<<"Good salary\n";
//     else {
//         cout<<"You are rich!\n";
//         cout<<"lucky guy\n";
//     }
//     return 0;
// }

//Syntax for nested IF condition *****************************************************************************

// int main() {
//     int salary;

//     cout<<"Enter salary: ";
//     cin>>salary;

//     if (salary < 1000)
//     {
//         cout<<"Enter Age: ";
//         int age;
//         cin>>age;

//         if (age < 22)
//             cout<<"You are still young.";
//     }
//     else
//     {
//         cout<<"You are rich!!!\n";
//     }
    
// }

// //Simple Calculator***********************************************************************************

// int main() {
//     double a, b;
//     char o;
    
//     cout<<"Enter a number followed by a sign followed by a number: \n";
//     cin>>a>>o>>b; 
    
//     if (o == '+')
//         cout<<(a + b)<<"\n";
//         else if (o == '-')
//             cout<<(a - b);
//             else if (o == '*')
//                 cout<<(a * b);
//                 else
//                 {
//                     cout<<a / b <<"\n";
//                 }
                

//     return 0;

// }

// //Minimum of 3 numbers My Answer**********************************************

// int main(){
//     int a, b, c;
//     cin>>a>>b>>c;
    
//     if (a < b && a < c)
//         cout<<a;
//     else if (b < a && b < c)
//         cout<<b;
//     else if (c < a && c < b)
//         cout<<c;
    
      
    
//     return 0;    
// }
// // Minimum of 3
//Instructor answer **********************************************************************************************

// Much more scaleable approach***********************************************************************************

// int main() {
//     int a, b, c;
//     cin>>a>>b>>c;

//     int answer = a;

//     if(answer > b)
//         answer = b;
    
//     if (answer > c)
//         answer = c;
//     cout<< answer << "\n";

//     return 0;
// }

// // Is Even/Odd? print digits: My answer!****************************************************************************************

// int main() {
//     int a;
//     cin>>a;
//     int ans1 = a % 10;
//     int ans2 = a % 100;
//     int ans3 = a % 10000;
//     int ans4 = a * -1;
    
//     if((a % 2) == 0)
//         cout<<ans1;
//     else if(a % 2 == 1 && a < 1000)
//         cout<<ans2;
//     else if(a % 2 == 1 && a > 1000 && a < 1000000)
//         cout<<ans3;
//         else
//         {
//             cout<<ans4;
//         }
            
//     return 0;
// }

// // Is Even/Odd? print digits: Instructor answer!$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// Almost the same

// Last 3 digits sum and logic: My Answer: only partially works!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// int main() {
//     int a;
//     cin>>a;
    
//     int sum1 = a % 10;
//     a /= 10;
//     int sum2 =a % 10;
//     a /= 10;
//     int sum3 = a % 10;
//     int ans = sum1 + sum2 + sum3;
//     // bool isEven = (ans % 2) == 0;
    
    
//     if (a <= 10001)
//         cout<<"This is a small number\n";
//     else
//     {
//         if(ans % 2 != 0)
//             cout<<"This is a great number\n";
//             else
//             {
//                 if ((sum1 % 2) != 0  || (sum2 % 2) != 0|| (sum3 % 2) != 0)
//                     cout<<"This is a good number\n";
//                     else
//                     {
//                         cout<<"This is a bad number\n";
//                     }
                    
//             }
        
//     }
//     return 0;
// }

// Last 3 digits sum and logic: My Answer: only partially works!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//Proffessor Solution$#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// Needed to move logic beneath the first if statement!

// int main() {
//     int a;
//     cin>>a;
    
//     if (a <= 10000)
//         cout<<"This is a small number\n";
//     else
//     {   
//         int dig1 = a % 10;
//         a /= 10;
//         int dig2 =a % 10;
//         a /= 10;
//         int dig3 = a % 10;
//         int sum = dig1 + dig2 + dig3;
        
//         if( (sum%2) != 0)
//             cout<<"This is a great number\n";
//             else
//             {   
//                 bool is_dig1_odd = (dig1 % 2 != 0);
//                 bool is_dig2_odd = (dig2 % 2 != 0);
//                 bool is_dig3_odd = (dig3 % 2 != 0);

//                 if (is_dig1_odd || is_dig2_odd || is_dig3_odd)
//                     cout<<"This is a good number\n";
//                     else
//                     {
//                         cout<<"This is a bad number\n";
//                     }
                    
//             }
        
//     }
//     return 0;
// }

//Even odd calculator My answer**********************************************************************************************

// int main() {
//     int a, b;
//     cin>>a>>b;

//     bool a_is_even = (a % 2 == 0);
//     bool a_is_odd = (a % 2 == 1);
//     bool b_is_even = (b % 2 == 0);
//     bool b_is_odd = (b % 2 == 1);

//     if (a_is_odd && b_is_odd)
//         cout<< (a * b) << "\n"; 
    
//     else if (a_is_even && b_is_even)
//         cout<<(a / b) <<"\n";
    
//     else if (a_is_odd && b_is_even)
//         cout<<(a + b) <<"\n";
//         else
//         {
//             cout<< (a - b) <<"\n";
//         }
        

//     return 0;

// }

//

//Even odd calculator $Professor$ Shorter answer**********************************************************************************************

// int main() {
// 	int a, b;
// 	cin >> a >> b;

// 	bool is_a_even = (a % 2 == 0);
// 	bool is_b_even = (b % 2 == 0);

// 	if (!is_a_even && !is_b_even)
// 		cout << a * b << "\n";
// 	else if (is_a_even && is_b_even)
// 		cout << a / b << "\n";
// 	else if (!is_a_even && is_b_even)
// 		cout << a + b << "\n";
// 	else
// 		cout << a - b << "\n";

// 	return 0;
// }

// //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//
// // ********************** Important **********************************************************************************************************
// // Given 3 integers, sort(order) them in ascending order and print them.
// //Inputs
// // 1 2 3 => 1 2 3
// // 1 3 2 => 1 2 3 
// // 2 1 3 => 1 2 3
// // 2 3 1 => 1 2 3 
// // 3 1 2 => 1 2 3 
// // 3 2 1 => 1 2 3 

// // Couldn't Solve Professor Solution**

// int main() {
// 	int a, b, c, tmp;
// 	cin >> a >> b >> c;

// 	if (b < a) { // Swap them

// 		tmp = a;
// 		a = b;
// 		b = tmp;
// 	}
// 	// Now a, b are correct

// 	if (c < b) { // Swap them

// 		tmp = b;
// 		b = c;
// 		c = tmp;

// 		// Now b, c are correct
// 		// But a, b may not be again

// 		if (b < a) {	// Swap them{
// 			tmp = a;
// 			a = b;
// 			b = tmp;
// 		}
// 	}
// 	cout<<a<<" "<<b<<" "<<c<<"\n";

// 	return 0;
// }
 
 // Maximum but constrained: My answer**************************************************************************************************

// int main() {
//     int a, b, c;
//     cin>>a>>b>>c;
//     int max = 99;
//      if (a > max && b > max && c > max)
//         cout<<-1;
//         else
//         {
//             if (a > max && b > max)
//                 cout<<c;
//             else if (a > max && c > max)
//                 cout<<b;
//             else if (b > max && c > max)
//                 cout<<a;
//                 else
//                 {
//                     if (a > max && b > c)
//                         cout<<b;
//                     else if (a > max && b < c)
//                         cout<<c;
//                         else
//                         {
//                             if(b > max && a > c)
//                                 cout<<a;
//                             else if(b > max && a < c)
//                                 cout<<c;
//                                 else
//                                 {
//                                     if (c > max && a > b)
//                                         cout<<a;
//                                     else if (c > max && a < b)
//                                     cout<<b;
//                                     else
//                                     {
//                                         if(a > b && a > c)
//                                             cout<<a;
//                                         else if(b > a && b > c)
//                                             cout<<b;
//                                         else if(c > a && c > b)
//                                             cout<<c;
//                                     }
                                    
//                                 }
                                
//                         }
                        
//                 }
                
//         }
//     return 0;

// }

//Professor Solution 1 $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int a, b, c, tmp;
// 	cin >> a >> b >> c;

// 	int res = -1;

// 	if (a < 100 && a > res)
// 		res = a;

// 	if (b < 100 && b > res)
// 		res = b;

// 	if (c < 100 && c > res)
// 		res = c;

// 	cout<<res<<"\n";

// 	return 0;
// }

// ************************************** % Maximum but constrained my second attempt % ********************************************************


// int main() {
//     int a, b, c;
//     cin>>a>>b>>c;

//     int res;

//     if(a < 100) {
//         res = a;
    
    
//     if(b < 100 && b > res)
//         res = b;
    
//     if(c < 100 && c > res)
//         res = c;
//         cout<<res;
//     } 
//         else
//             {
//                 cout<<-1;
//             }   
//     return 0;
// }


// Proffessor Solution 2 $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int a, b, c, tmp;
// 	cin >> a >> b >> c;

// 	int res = -1;

// 	// The next 3 if conditions: let's try to initalize res correctly
// 	if (a < 100)
// 		res = a;

// 	if (b < 100)
// 		res = b;

// 	if (c < 100)
// 		res = c;

// 	// The next 3 if conditions: let's get the valid max
// 	if (a < 100 && a > res)
// 		res = a;

// 	if (b < 100 && b > res)
// 		res = b;

// 	if (c < 100 && c > res)
// 		res = c;

// 	cout<<res<<"\n";

// 	return 0;
// }

// // My answer $ Sort Counter$ ********************************************************** 

// int main() {
//     int x;
//     int a, b, c, d, e;
//     cout<<"Please enter number x: \n";
//     cin>>x;
//     cout<<"Please enter five comparison numbers: \n";
//     cin>>a>>b>>c>>d>>e;
//     int great = 0;
//     int less = 0;
    
//     if(a < x)
//         a = less++;
//         else
//         {
//             a = great++;
//         }
    
//     if(b < x)
//         b = less++;
//         else
//         {
//             b = great++;
//         }
    
//     if(c < x)
//         c = less++;
//         else
//         {
//             c = great++;
//         }
    
//     if(d < x)
//         d = less++;
//         else
//         {
//             d = great++;
//         }
    
//     if(e < x)
//         e = less++;
//         else
//         {
//             e = great++;
//         }
        
//     cout<<less<<" "<<great<<"\n";
//     return 0;
// }
// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   Professors Answer$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
// #include<iostream>
// using namespace std;

// int main() {
// 	int x, a1, a2, a3, a4, a5;

// 	cin >> x >> a1 >> a2 >> a3 >> a4 >> a5;

// 	int cnt = 0;

// 	cnt += (a1 <= x);
// 	cnt += (a2 <= x);
// 	cnt += (a3 <= x);
// 	cnt += (a4 <= x);
// 	cnt += (a5 <= x);

// 	cout << cnt << " " << 5 - cnt << "\n";

// 	return 0;
// }

// //Greatest of 10 My answer; I didn't fully understand the question!****************************************************************************

// int main() {
//     int a, b, c, d, e, f, g, h, i, j;
//     cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;

//     int ans = a;
    
//     if (b > ans)
//         ans = b;
    
//     if (c > ans)
//         ans =c;

//     if (d > ans)
//         ans = d;
    
//     if (e > ans)
//         ans = e;
    
//     if (f > ans)
//         ans = f;
    
//     if (g > ans)
//         ans = g;
    
//     if (h > ans)
//         ans = h;
    
//     if (i > ans)
//         ans = i;
    
//     if (j > ans)
//         ans = j;
    
//     cout<<ans;
    
//     return 0;

    
   
// }


// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$  Professors Answer $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int result, num;

// 	cin>>result;	// First number

// 	// Read 9 times and maximize
// 	cin>>num;	if(result < num)	result = num;
// 	cin>>num;	if(result < num)	result = num;
// 	cin>>num;	if(result < num)	result = num;
// 	cin>>num;	if(result < num)	result = num;
// 	cin>>num;	if(result < num)	result = num;
// 	cin>>num;	if(result < num)	result = num;
// 	cin>>num;	if(result < num)	result = num;
// 	cin>>num;	if(result < num)	result = num;
// 	cin>>num;	if(result < num)	result = num;

// 	cout<<result;

// 	return 0;
// }

// Find Maximum of 10 After Input: $$$$  Instructor Answer $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int cnt, result, num;

//     cout<<"enter count \n";
// 	cin>>cnt;

//     cout<<"enter 1st num\n";
// 	cin>>result;	// First number
// 	cnt -= 1;

// 	// Read  times and maximize
// 	if(cnt > 0)		{cnt -=1; cout<<"num2\n";		cin>>num;	if(result < num)	result = num;		}
// 	if(cnt > 0)		{cnt -=1; cout<<"num3\n";		cin>>num;	if(result < num)	result = num;		}
// 	if(cnt > 0)		{cnt -=1; cout<<"num4\n";		cin>>num;	if(result < num)	result = num;		}
// 	if(cnt > 0)		{cnt -=1; cout<<"num5\n";		cin>>num;	if(result < num)	result = num;		}
// 	if(cnt > 0)		{cnt -=1; cout<<"num6\n";		cin>>num;	if(result < num)	result = num;		}
// 	if(cnt > 0)		{cnt -=1; cout<<"num7\n";	    cin>>num;	if(result < num)	result = num;		}
// 	if(cnt > 0)		{cnt -=1; cout<<"num8\n";		cin>>num;	if(result < num)	result = num;		}
// 	if(cnt > 0)		{cnt -=1; cout<<"num9\n";		cin>>num;	if(result < num)	result = num;		}
// 	if(cnt > 0)		{cnt -=1; cout<<"num10\n";		cin>>num;	if(result < num)	result = num;		}

// 	cout<<result;

// 	return 0;
// }

// // ******************************************** % Intervals: My answer % ****************************************************

// int main() {
//     int x, s1, e1, s2, e2, s3, e3;
//     int success = 0;
    
//     cout<<"submit start index: followed by the three indexes: \n";
//     cin>>x>>s1>>e1>>s2>>e2>>s3>>e3;
    
//     if (x >= s1 && x <= e1)
//         success++;
//     if (x >= s2 && x <= e2)
//         success++;
//     if (x >= s3 && x <= e3)
//         success++;

//     cout<<success;
// }


// // *************************************** $$ Professor Answer $$ ************************************************************

// int main() {
// 	int x, start, end, cnt = 0;

// 	cin>>x;

// 	//Read start and end, then see if X is between them or not, 3 times
// 	cin>>start>>end;
// 	cnt += (start <= x && x <= end);

// 	cin>>start>>end;
// 	cnt += (start <= x && x <= end);

// 	cin>>start>>end;
// 	cnt += (start <= x && x <= end);

// 	cout<<cnt<<"\n";

// 	return 0;
// }

// // ********************************* % Two Intervals Intersection % My Answer %************************************************************************

// int main() {
//     int s1, e1, s2, e2;
//     cin>>s1>>e1>>s2>>e2;
//     int a;
//     int b;
    
//     if (e1 <= s2 || e2 <= s1)
//         cout<<-1;
//      else
//     {
//            if (s1 >= s2)
//         a = s1;
//         else
//         {
//             a = s2;
//         }
        
//     if (e1 <= e2)
//         b = e1;
//         else
//         {
//             b = e2;
//         }
    
//     cout<<a<<" "<<b;
//     }
    
//     return 0;
// }   

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Instructor Answer $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$


// int main() {
// 	int s1, e1, s2, e2;

// 	cin >> s1 >> e1 >> s2 >> e2;

// 	if(e1 < s2 || e2 < s1)
// 		cout<<-1<<"\n";		// One of them ends before start of the another
// 	else
// 	{	
//         if(s1 < s2)	s1 = s2;	// maximum of (s1, s2)
// 		if(e1 > e2) e1 = e2;	// minimum of (e1, e2)

// 		cout<<s1<<" "<<e1<<"\n";
// 	}
    
//     return 0;
// }

// // ********************************************************  ## Divisble by 3 ## *****************************************************

// int main(){
//     int end;
//     cin >> end;

//     int start {1};

//     while (start <= end) {
//         if (start % 3 == 0)
//             cout << start << "\n";
//             start += 1;
//     } 
//     return 0;
// }

// ******************************************** ## Power Function ## ********************************************************************

// int main() {
//     int num, pow;
//     cin >> num >> pow;

//     int result = 1;

//     while (pow >= 1) {
//         result *= num;
//         pow--;
//     } 
//     cout<<result;
//     return 0;
// }

// // ************************************************ ## Count the number of Digits ## *******************************************************
// // ************************************************ %% Find the 2 bugs %% ******************************************************************
// // ************************************************ %% My answer {0, -num} %% **************************************************************
// int main() {
//     int num;
//     cin>>num;

//     int digits {0};
//     while (num > 0) {
//         digits +=1;
//         num = num / 10;
//     }
//     cout<<digits;
//     return 0;
// }

// // ***************************************************** ## Count the number of Digits/ Bugs Fixed ##**************************************
// // ***************************************************** %% Fails in 1 case (What is it?) %% **********************************************
// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Answer if min max value is used $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
// int main() {
//     int num;
//     cin>>num;
//     int digits {0};
    
//     if(num == 0)
//         digits = 1;
//     else if (num < 0)
//         num = -num;

//         while (num > 0) {
//             digits += 1;
//             num = num / 10;
//         }
//         cout<<digits;
//         return 0;
//     }

// // ************************************************************* Min Max Bug fix **************************************************************

//     int main() {
//     int num;
//     cin>>num;
//     int digits {0};
    
//     if(num == 0)
//         digits = 1;
    
//     else if (num == -2147483648)
//         digits = 10;
//     else
//     { 
//         if (num < 0)
//         num = -num;
    
//         while (num > 0) {
//             digits += 1;
//             num = num / 10;
//         }
//     }
        
//         cout<<digits;
//         return 0;
// }

// ******************************************** ## Nested While Loop For Test Cases ## ********************************************
// // ******************************************* ## Finds 1+2+3+4+5 etc. For a given number of test cases ##************************

// int main() {
//     int T;
//     cin >> T;

//     while (T > 0) {
//         int num;
//         cin >> num;

//         int sum = 0;
//         int start = 1;

//         while (start <= num) {
//             sum += start;
//             start++;
//         }
//         --T;
//         cout<< "Sum from 1 to " <<num<< " = " << sum << "\n";
//     }
//     return 0;
// }

// // ************************************* Print Range / % My Answer % ******************************************

// int main() {
//     int x, y;
//     cin >> x >> y;
//    int res = x;

//     while (res <= y){
//         cout<<res<<"\n";
//         res += 1;
//     }
    
//     return 0;
// }

// //********************************************* My version fixed *************************************************** 

// int main() {
//     int x, y;
//     cin >> x >> y;
// //    int res = x;

//     // while (res <= y){
//         while(x <= y) {
//         cout<<x<<"\n";
//         x++;
//     }
    
//     return 0;
// }

// **************************************** Print Range / $ Instructor Ansewer $ **********************************
// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ This is better because he used one less variable $$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int start, end;

// 	cin>>start>>end;

// 	while(start <= end)
// 	{
// 		cout<<start<<"\n";
// 		start++;
// 	}

// 	return 0;
// }

// // ************************************ % Line of Characters % My Answer / Still 1 Extra Variable****************************************

// int main() {
//     int a;
//     char b = '$';
//     cin >> a;
//     int cnt = 1;
    
//     while (cnt <= a) 
//     {
//         cout<<b;
//         cnt++;
//     }
//     return 0;

// }

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Instructors Solution $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int num;
// 	char ch;

// 	cin>>num>>ch;

// 	while(num > 0)
// 	{
// 		cout<<ch;
// 		num -= 1;
// 	}

// 	return 0;
// }

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Couldn't Answer : Instructors Answer $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int N;

// 	cin >> N;

// 	int row = 1;
// 	while (row <= N) {
// 		int stars_count = 1;

// 		while (stars_count <= row) {
// 			cout << '*';
// 			++stars_count;
// 		}
// 		cout << "\n";
// 		row++;
// 	}

// 	return 0;
// }

// // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% Left Angled Triangle/My Answer %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// int main() {
//     int N;
//     cin>>N;
//     int row = N;

//     while (row > 0){
//         int stars_count = row;

//         while (stars_count > 0) {
//             cout<<'*';
//             stars_count--;
//         }
//         cout<<"\n";
//         row--;
//     }
// }

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Instructor Answer / both work well but very different $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int N;

// 	cin >> N;

// 	int row = N;
// 	while (row > 0) {
// 		int stars_count = 1;

// 		while (stars_count <= row) {
// 			cout << '*';
// 			++stars_count;
// 		}
// 		cout << "\n";
// 		row--;
// 	}

// 	return 0;
// }

// // ******************************************** Even/Odd Index Average **************************************************************
// // // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% My Answer %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// /// // This Failes %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% This Failes !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// int main() {
//     int N;
//     double numO = 0;
//     double numE = 0;
//     cin>>N;
//     int cnt = N;
    


//     while(cnt > 0){
//         double a, b;
//         cin>>a;
//         numO += a;
//         cnt--;
//         if(cnt == 0)
//             break;
//         cin>>b;
//         numE += b;
//         cnt--;
//     }
//     cout<<(numO) / (N/2.0)<< " " <<(numE) / (N/2.0)<< "\n";
    
//     return 0;
// }

// // // ******************************************** Even/Odd Index Average **************************************************************
// // // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% My Answer %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// // My Answer Failes Division Portion is Wrong!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// /*
//  *
//  * Test cases
//  * Input: 7 11 101 21 201 31 602 78
//  *
//  * Output: 35.25 301.333
//  */


// // // // //int main() {
//     int N;
//     double numO = 0;
//     double numE = 0;
//     cin>>N;
//     int cnt = N;
    
//     while(cnt > 0){
//         double a, b;
//         cin>>a;
//         a++;
//         numO += a;
//         cnt--;
//         if(cnt == 0)
//             break;
//         cin>>b;
//         b++
//         numE += b;
//         cnt--;
//     }
//     cout<<(numO / a)<< " " <<numE / b<< "\n";//This is wrong
    
//     return 0;
// }

// // Instructors Solution $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int N;

// 	cin >> N;

// 	// Use doubles to: 1) allow any values 2) get average correctly
// 	double even_sum = 0, odd_sum = 0;
// 	int even_count = 0, odd_count = 0;

// 	int cnt = 1;
// 	while (cnt <= N) {
// 		double value;
// 		cin >> value;

// 		if (cnt % 2 == 0)	// even position
// 			even_sum += value, even_count++;
// 		else				// odd position
// 			odd_sum += value, odd_count++;

// 		cnt++;
// 	}

// 	cout <<odd_sum / odd_count << " " << even_sum / even_count << "\n";

// 	return 0;
// }

// // Spectial Multiples ************************ %% My Answer 100% Correct %% ***************************************************** 

// int main() {
//     int N;
//     int x = 0;
//     cin>>N;

//     while (N > x) {
//         if(x % 8 == 0 || x % 3 == 0 && x % 4 == 0)
//             cout<<x<<" ";
//             x++;
//     }
    
//     return 0;
// }

// ************************************ %% Special Multiples/ My Answer works %%***************************************************************  

// int main() {
//     int N;
//     int x = 1;
//     cin>>N;
//     int cnt = N * 4;

//     while(x < cnt){
//         if(x % 3 == 0 && x % 4 != 0)
//             cout<<x<<" ";
//             x++;
//     }
//     return 0;
// }

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Instructor Solution 1 $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int N, result = 0;

// 	cin >> N;

// 	int cnt = 0;
// 	int current_number = 0;

// 	while (cnt < N) {
// 		if (current_number % 3 == 0 && current_number % 4 != 0) {
// 			cout << current_number << " ";
// 			cnt++;
// 		}
// 		current_number++;
// 	}
// 	return 0;
// }

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Instructor Solution 2 $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
// // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! Best Answer of the 3 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// int main() {
// 	int n;
// 	cin >> n;

// 	int start = 3;
// 	while (n) {
// 		if(start % 4 != 0)	// make sure multiple of 4 too
// 			--n, cout<<start<<" ";
// 		start += 3;	// increment with 3: is multiple of 3
// 	}

// 	return 0;
// }

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Print Diamond / Extreme / Instructors Solution $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int N;

// 	cin >> N;

// 	/*
// 	 * Let's print the upper triangle first
// 	 * Let's assume N = 4, how many spaces and starts we print
// 	 * Row 1	Spaces 3	Stars 1
// 	 * Row 2	Spaces 2	Stars 3
// 	 * Row 3	Spaces 1	Stars 5
// 	 * Row 4	Spaces 0	Stars 7
// 	 *
// 	 * Now we wanna develop formulas for number of spaces and number of starts
// 	 * For a given 'row'
// 	 * 	Spaces are: N - rows   	(3, 2, 1, 0)
// 	 * 	Starts are: 2*row -1	(1, 3, 5, 7)
// 	 *
// 	 * Now we just iterate for each row
// 	 * 	print spaces
// 	 * 	then print starts
// 	 */
// 	int row = 1;
// 	while (row <= N) {
// 		int stars_count = 1;

// 		// Print N - rows spaces
// 		while (stars_count <= N-row) {
            
// 			cout << ' ';
// 			++stars_count;
// 		}

// 		// Print 2*rows-1 stars
// 		stars_count = 1;
// 		while (stars_count <= 2*row-1) {
// 			cout << '*';
// 			++stars_count;
// 		}
// 		cout << "\n";
// 		++row;
// 	}

// 	/*
// 	 * Let's print the lower triangle second
// 	 * Same logic, we just switch looping from N to 1
// 	 */
// 	row = N;
// 	while (row >= 1) {
// 		int stars_count = 1;

// 		while (stars_count <= N-row) {
// 			cout << ' ';
// 			++stars_count;
// 		}

// 		stars_count = 1;

// 		while (stars_count <= 2*row-1) {
// 			cout << '*';
// 			++stars_count;
// 		}
// 		cout << "\n";
// 		--row;
// 	}
// 	return 0;
// }

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$ Find No / Proffessor Solution / Couldn't Solve $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
//     int N;
//     cin>>N;
//     int pos = 0;

//     while (pos < N) {
//         string str;
//         cin>>str;
        
//         if (str == "no" ||str ==  "NO" || str == "No" || str == "nO" || str == "on" || str == "On" || str == "ON" ||str == "oN")
//             cout<<str<<" ";
            
//         pos++;
//     }

    
//     return 0;
// }

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Reverse Number / Instructor Solution / Couldn't Solve $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int N;

// 	cin >> N;

// 	int number = 0;

// 	while (N > 0) {
// 		int last_digits = N % 10;
// 	//	cout<<last_digits<<" ";
// 		N /= 10;	// remove last digit

// 		number = number * 10 + last_digits;
//       //  cout<<number<<" ";
// 	}
// 	cout << number << " " << number * 3 << "\n";

// 	return 0;
// }

// // %%%%%%%%%%%%%%%%%%%%%%%%%%%% Minimum of Values / My Answer : Seems to work well %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// int main() {
//     int T, N, x;
//     cin>>T;
//     int res = x + 1;

//     while(T > 0) {
//         cin >> N;
        

//         while(N > 0){
//             cin>>x;
//             int res = x + 1;
//             if (x < res)
//                 x = res;
//             N--;
            
//         }
//         cout<<res<<"\n";
//         T--;
//     }
    

//     return 0;
// }

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Minimum of values / Instructor Solution $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int T;

// 	cin >> T;

// 	while (T > 0) {
// 		int N;
// 		cin >> N;

// 		int pos = 0;
// 		int result;

// 		while (pos < N) {
// 			int value;
// 			cin >> value;

// 			if (pos == 0)
// 				result = value;
// 			else if (result > value)
// 				result = value;

// 			pos++;
// 		}
// 		cout<<result<<"\n";

// 		--T;
// 	}

// 	return 0;
// }

// ******************************** % Multiplication Table / My Answer % It works % *********************************************

// int main() {
//     int N, M;
//     cin >> N >> M;
//     int x = 0;
    
    
//     while(N > 0) {
//         x++;
//         N--;
//         int a;
//         a = M;
//         int y = 0;
            
//         while(a > 0){
//             y++;
//             a--;
//             int res;
//             res = x * y;
//             cout<< x << 'x' << y << '=' << res <<"\n";
//         }
            
//     }
        
//     return 0;
// }

// // ******************************** $$ Multiplication Table / Proffessor Answer / Better than Mine $$ ***********************

// int main() {
// 	int n, m;

// 	cin >> n >> m;

// 	int cnt_n = 1;

// 	while (cnt_n <= n) {
// 		int cnt_m = 1;

// 		while (cnt_m <= m) {
// 			cout << cnt_n << " x " << cnt_m << " = " << cnt_n * cnt_m << "\n";
// 			cnt_m++;
// 		}
// 		cnt_n++;
// 	}

// 	return 0;
// }

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Special Sum / I couldn't answer / Prof. Answer $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$


// int main() {
// 	int T;

// 	cin >> T;

// 	/**
// 	 * We need 3 nested loops
// 	 * loop over test cases
// 	 * 	loop over reading numbers
// 	 * 	  loop to repeat the number K times (multiplication)
// 	 */

// 	while (T > 0) {
// 		int N;
// 		cin >> N;

// 		int cnt_N = 1;
// 		int sum = 0;
// 		while (cnt_N <= N) {
// 			int value = 0;
// 			cin >> value;

// 			int cnt_deep = cnt_N;
// 			int result = 1;

// 			while (cnt_deep > 0)
// 				result *= value, cnt_deep--;
//                 cout<<result<<"\n";
// 			sum += result;
// 			cnt_N++;
// 		}
// 		cout<<sum<<"\n";

// 		T--;
// 	}

// 	return 0;
// }

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$  Nested For Loop Example: $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$


// int main() {
    
// 	int t = 0;
// 	for (int c = 0; c < 3; ++c) {
// 		for (int var = 0; var < 4; ++var)
// 			for (int h = 0; h < 2; ++h)
// 				++t;
//                 cout<<t<<"\n"; // // 24 t
// 			++t;
//             cout<<t<<"\n";   // // 3 t
// 		++t;
//         cout<<t<<"\n";    // // 3 t 
        
// 	}
// 	cout << t;      // // t = 30
 
// 	return 0;
// }

// // For Loops practice Same as Last Entry for While Loops // Detailed Breakdown of For Loops !@#$#$%$%^%^%&^%&&^&%#%!@!#!!@#$%%^^&^$@@#

// int main() {
// 	int N, T, value;
//     cin >> T;                                   // //                                         1st cin>> 2

//     while(T--) {                                // // 1st Loop                                2nd cin >> 3 / 4
//         cin >> N;                               // // N = 3 

//         int sum {0};                            
//         for(int i = 0; i < N; ++i) {
//             cin >> value;                       //                                              3rd cin>> 1,2,3;  /  1,2,3,4;

//             int result {1};                     // // result = 1/1/1
//             for(int j = 0; j < i + 1; ++j)      
//                 result *= value;                // // result = 1/2/4/27 *** (explained below)                    cout # 1  1/4/27
//                     cout<<result<<"\n";         // // value
                     
//                 sum += result;                    // // sum = 1+4/5+27/32                  cout # 2   1/5/32
//                     cout<<sum<<"\n";
//         }
//         cout << sum <<"\n";                     // // sum = 1/5/32          cout  # 3 (Not Visible Until the End) [32] => ONLY OUTPUT
//     }
 
// 	return 0;
// }

// /* Two For Loops Explained{
//     for (int i = 0; i < N; ++i)
//         i = 0, 1, 2; Because in the exampe => N = 3

//     for (int j = 0; j < i + 1; ++j)
      
//         1st input = 1  
//             j => 0 / only on the first input, because i = 0/ 0 + 1 = 1/ as soon as j = 1 the loop is terminated!
//                 [1] result *= [1] value = [1]result/ loop performed once only so the {cout<<1}

//         2nd input = 2
//             j = 0 && j = 1 Both run / because i = 1 / 1 + 1 = 2 / as soon as j = 2 the loop is terminated!
//                 [1] result *= [2] value  = result[2]/ But the loop runs a second time!
//                 [2] result *= [2] value = result[4] /  because j now = 2 {cout << 4}

//         3rd input = 3;
//             j = 0 && j = 1 && j = 2 All run Because i = 2 / 2 + 1 = 3/ as soon as j = 3 the loop is terminated!
//                 [1] result *= [3] value = [3]result / Loop runs again
//                 [3] result *= [3] value = [9]result / loop runs again
//                 [9] result *= [3] value = [27]result / 
//                 j = 3 / Loop exits {cout << 27}



            
// }*/


// // Hackerrank code %%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Hackerrank****************************************************************

// int main() {
//     int a, b;
//     cin >> a >> b;

//     for (int i = a; i <= b; i++) {
        
//         if (i > 0 && i < 2)
//             cout<<"one\n";
//         if (i > 1 && i < 3)
//             cout<<"two\n";
//         if (i > 2 && i < 4)
//             cout<<"three\n";
//         if (i > 3 && i < 5)
//             cout<<"four\n";
//         if (i > 4 && i < 6)
//             cout<<"five\n";
//         if (i > 5 && i < 7)
//             cout<<"six\n";
//         if (i > 6 && i < 8)
//             cout<<"seven\n";
//         if (i > 7 && i < 9)
//             cout<<"eight\n";
//         if (i > 8 && i < 10)
//             cout<<"nine\n";
//         if(i >= 10 && i % 2 == 0)
//             cout<<"even\n";
//         else if(i > 10 && i % 2 != 0)
//             cout<<"odd\n";
    
//     } 
    
    
//     return 0;
// }

// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Pair of Numbers Two Ways / Slow 2 Loop Version 1st $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
//     int n, m, sum;
//     cin >> n >> m >> sum;
//     int cnt = 0;

//     for (int i = 1; i <= n; ++i)
//         for(int j = 1; j <= m; ++j)
//             if(i + j == sum)
//                 cnt++;

//         cout<<cnt<<"\n";
//     return 0;
// }



// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Faster 1 Loop Version $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// /*  ***************************** In this example the second loop is removed by Simple Math Making This Version Much Faster 
//                                     Than the previous one $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$4
// */


// int main() {
//     int n, m, sum;
//     cin >> n >> m >> sum;
//     int cnt = 0;

//     for (int i = 1; i <= n; ++i)
//     {

//         int j = sum - i;                // i + j == sum;

//         if(1 <= j && j <= m)
//             cnt++;

//     }
      
//     cout << cnt << "\n";

//     return 0;
// }

//*************************************************** Find Triples of Numbers / 3 Loops ************************************************

// int main () {
//         int n, m, w;
//         cin >> n >> m >>  w;

//         int cnt = 0;
        
//         for (int i = 1; i <= n; ++i)
//             for (int j = i; j <= m; ++j)
//                 for (int k = 1; k <= w; ++k)
//                     if (i + j <= k)
//                         cnt++;
        
//         cout << cnt <<"\n";
        
    
    
    
//     return 0;
// }

// // **************************************** Find Triples Better 2 Loop Version ********************************************


// int main () {
//         int n, m, w;
//         cin >> n >> m >>  w;

//         int cnt = 0;
        
//         for (int i = 1; i <= n; ++i) 
//             for (int j = i; j <= m; ++j){

//                 int k = i + j;

//                 if (1 <= k && k <= w) 
//                     cnt += w - k + 1;
                
//             }
                
//                 cout << cnt << "\n";
            
        
//         return 0;

// }

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ Fibonacci Sequence / Couldn't Figure Out $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
//     int n = 10, a = 0, b = 1;

//     cout<<a<<" "<<b<< " ";

//     for (int cnt = 2; cnt < n; ++cnt)
//     {
//         int c = a + b;
//         a = b;
//         b = c;

//         cout<<c<<" ";
//     }
//     return 0;
// }

// *****************************************Fibonacci Sequence with an Input **************************************

// int main() {
//     int n;
//     cin>>n;
//     int a {0}, b {1};
    
//     for (int i = 2; i < n; ++i){
//         int c = a + b;
//         a = b;
//         b = c;

//         cout<<c<<" ";
//     }
//     return 0;
// }

/* ******************************************** While Loops Homework Repeated with For Loops ********************************************** 
// ********************************************** 1st Problem print Range / My Solution Works ************************************************
// */
// int main () {
//     int x, y;
//     cin >> x >> y;

//     for (int i = x; i <= y; ++i)

//         cout<<i<<" ";
// return 0;
// }

// ************************************ Line of Characters For Loop % Works Well ***************************************************

// int main() {
//     int x;
//     char y;

//     cin >> x >> y;

//     for (int i = 1; i <= x; ++i)
//     {
//         cout<<y;
//     }
    
//     return 0;
// }

// // ************************************* %% Left Angled Triangle / My Solution For Loop %% Works Well ***************************

// int main() {
//     int n;
//     cin>>n;
    

//     for (int i = 1; i <= n; ++i){
//         int stars_count = i;
        
//         for(int j = 0; j < stars_count; j++){
//             cout<<'*'<<" ";
//         }
//         cout<<"\n";
//     }



// return 0;
// }


// *********************************** %% Right Angled Triangle %% My Solution Works Well %%**********************************


// int main() {
//     int n;
//     cin>>n;
    

//     for (int i = n; i >= 0; --i){
//         int stars_count = i;
        
//         for(int j = 0; j < stars_count; j++){
//             cout<<'*'<<" ";
//         }
//         cout<<"\n";
//     }



// return 0;
// }

// // ***************** Print A * Diamond %% For Loop Version %% Works Well %% My Answer %% ***************************

// int main() {
//     int n, row = n;
//     cin>>n;

//     for (int i = 1; i <= n; ++i)
//     {
//         int str_cnt = i;
//         row--;

//         for (int k = 0; k < row -1; ++k)
//         {
//             cout<<" ";
//         }
//         for (int j = 0; j < str_cnt; ++j)
//         {
//             cout<<'*'<<" ";
//         }
//         cout<<"\n";
//     }
//         int a = n;
//         int b = row;
//         for (int i = a; i > 0; --i)
//     {
//         int str_cnt = i;
//         b++;

//         for (int k = 1; k < b - 1; ++k)
//         {
//             cout<<" ";
//         }
//         for (int j = 0; j < str_cnt; ++j)
//         {
//             cout<<'*'<<" ";
//         }
//         cout<<"\n";
//     }


// return 0;
// }

// ***************************************** Special Average / With For Loops %% My Answer %% *******************************************

// int main() {
//     int n, m;
//     cin>>n;
//     int cnt = 0, even_cnt = 0, odd_cnt = 0;
//     double even_sum = 0.0, odd_sum = 0.0;
    
//     for (int i = 0; i < n; ++i)
//     {
//         cin>>m;
//         cnt++;
//         if(cnt % 2 == 0){
//             even_sum += m;
//             even_cnt++;
//         }    
        
//         if (cnt % 2 != 0){
//             odd_sum += m;
//             odd_cnt++;
//         }     
//         cout<<odd_sum<<" "<<even_sum<<"\n";

//     }
//     cout<<(odd_sum/odd_cnt)<<" "<<(even_sum/even_cnt)<<"\n";
    
//     return 0;
// }

//  ********************************** Special Multiples / For Loops % My Answer % **************************************************

// int main() {
//     int n;
//     cin>>n;

//     for (int i = 0; i < n; ++i)
//     {
//         if (i % 3 == 0 && i % 4 == 0 || i % 8 == 0)
//             cout<<i<<" ";
//     }
    
    
//     return 0;
// }

// ********************************************** Special Multiples 2 / For Loops % My Answer ***************************************

// int main(){
//    int n;
//    cin>>n;

//    for(int i = 0; i < n * 4; ++i) 
//    {
//        if(i % 3 == 0 && i % 4 != 0)
//             cout<<i<<" "; 
//    }
//    return 0;
// }

// // ********************************* Minimum of Values / For Loops %%My Answer%% *******************************************************

// int main() {
//     int t, n, a;
//     cin>>t;
    
//     for (int i = t; i > 0; --i){
//         cin>>n;
//         t--;

//         for(int j = n; j > 0; --j)
//         {
//             cin>>a;
//             int x = 0;
//             if (a < x) {
//                 a = x;
//             }
            
//         }
//         cout << a << " ";
//     }
//     return 0;
// }

// ***************************** %% Multiplication Table / For Loop %% My Answer %% ****************************************

// int main() {
//     int n, m;
//     cin>>n>>m;
    
//     for (int i = 1; i <= n; ++i){
//             for (int j = 1; j <=m; ++j)
//         {
//             cout<<i<<" "<<'x'<<" "<<j<<" "<<'='<<" "<<(i*j)<<"\n";
//         }
//     }
//     return 0;
// }


//     // ************************************ Print an X Instructor Answer / Couldn't Solve **************************

//    int main() {
// 	int n;

// 	cin>>n;

// 	for (int i = 0; i < n; ++i) {
// 		for (int j = 0; j < n; ++j) {
// 			if(i == j || n-i-1 == j)
// 				cout<<"*";
// 			else
// 				cout<<" ";
// 		}
// 		cout<<"\n";
// 	}

// 	return 0;
// }

// ***************************** $$ Special Sum: For Loops / Instructor Answer $$ **********************************************

// int main(){
//     int n;
//     int cnt = n, t, value;

//     cin>>t;
//     while(t--){
//         cin>>n;
        
//         int sum = 0; 
//         for (int i = 0; i < n; ++i) {
//             cin>> value; 

//             int result = 1; 
//             for (int j = 0; j < i + 1; ++j) 
//                 result *= value;
//             sum += result;
//             }
//             cout<< sum << "\n";
//         }
//         return 0;

//     }

// // ***************************************Find Special Pairs %% My Answer ************************************************

// int main () {
//     int cnt = 0;
//     for (int x = 50; x <= 300; ++x)
//         for (int y = 70; y <= 400; ++y){
//             if (x < y && (x + y) % 7 == 0)
//                 cnt++;
            
//         }
//         cout<<cnt;
   
//     return 0;
// }

// // ***************************************Find Special Pairs $$ Instructor Answer ************************************************


// int main() {
// 	int count = 0;

// 	for (int x = 50; x <= 300; ++x) {
// 		for (int y = 70; y <= 400; ++y) {
// 			if (x < y && ((x + y) % 7 == 0)) {
// 				//cout<<x<<" "<<y<<" "<<x+y<<"\n";
// 				++count;
// 			}
// 		}
// 	}
// 	cout<<count<<"\n";

// 	return 0;
// }

// // ******************************* $$$$$$ BEST Answer / More EFFICIENT **************************************************************

   
// int main() {
// 	int count = 0;

// 	for (int x = 50; x <= 300; ++x) {
// 		// Let's speed it
// 		// We can always start from the right condition maximum(70, x+1)
// 			// Saves some Y iterations
// 			// Remove the x < y condition
// 		int start = 70;

// 		if (start < x+1)
// 			start = x+1;

// 		for (int y = start; y <= 400; ++y) {
// 			if ((x + y) % 7 == 0) {
// 				//cout<<x<<" "<<y<<" "<<x+y<<"\n";
// 				++count;
// 			}
// 		}
// 	}
// 	cout<<count<<"\n";

// 	return 0;
// }

// *************************************************Find All Quadruples %% My Answer %% *************************************************

// int main() {
//     int cnt = 0;

//     for (int a = 1; a <= 200; ++a)
//         for (int b = 1; b <= 200; ++b)
//             for (int c = 1; c <= 200; ++c){
//                 int d = a + b - c;
//                 if (1 <= d && d <= 200)
//                     cnt++;
//             }
        
    
        
//     cout<<cnt<<"\n";
//     return 0;
// }

// // *************************************************Find All Quadruples %% Instructor  Answer %% *****************************************
// // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ EXACT MATCH TO MINE $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

// int main() {
// 	int count = 0;

// 	for (int a = 1; a <= 200; ++a) {
// 		for (int b = 1; b <= 200; ++b) {
// 			for (int c = 1; c <= 200; ++c) {
// 				int d = a + b - c;

// 				if(1 <= d && d <= 200)
// 					count++;
// 			}
// 		}
// 	}

// 	cout << count << "\n";

// 	return 0;
// }

// ******************************************* $$ Prime Number $$ Instructor Answer $$ Mine Failed **************************************

// int main() {
// 	int number;

// 	cin >> number;

// 	if (number == 1)
// 		cout << "NO\n";
// 	else {
// 		bool is_ok = true;

// 		for (int i = 2; i < number; ++i) {
// 			if (number % i == 0) {
// 				is_ok = false;
// 				break;
// 			}
// 		}

// 		if (is_ok)
// 			cout << "YES";
// 		else
// 			cout << "NO";
// 	}

// 	return 0;
// }

	// **************************** Print All Prime Numbers / Instructor Answer *************************************************
    
//     int main() {
// 	int target;
// 	bool first_print = true;

// 	cin >> target;

// 	for (int number = 2; number <= target; ++number) {
// 		bool is_ok = true;

// 		for (int i = 2; i < number; ++i) {
// 			// cout<<number<<'!'<<"\n";
// 			if (number % i == 0) {
// 				is_ok = false;
// 				break;
// 			}
// 		}

// 		if (is_ok)
// 		{
// 			if(!first_print)
// 				cout<<",";

// 			cout << number;

// 			first_print = false;
// 		}
// 	}

// 	return 0;
// }


