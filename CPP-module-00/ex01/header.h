#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <limits>

#define RST  	"\x1B[0m"
#define RED  	"\x1B[31m"
#define GRN  	"\x1B[32m"
#define YEL  	"\x1B[33m"
#define BLU  	"\x1B[34m"
#define MAG  	"\x1B[35m"
#define CYN  	"\x1B[36m"
#define WHT  	"\x1B[37m"

class Contact{
	private:
		std::string firstName;
		std::string surName;
		std::string nickname;
		std::string phoneNumber;
		std::string secret;
		int index;

	public:
		std::string getSecret(){
			return (secret);
		}
		std::string getFirstName(){
			return (firstName);
		}
		std::string getNickName(){
			return (nickname);
		}
		std::string getPhoneNumber(){
			return (phoneNumber);
		}
		std::string getSurName(){
			return (surName);
		}
		int getIndex(){
			return (index);
		}
		void setNickName(std::string nickname){
			this->nickname = nickname;
		}
		void setSurName(std::string surName){
			this->surName = surName;
		}
		void set_Index(int index){
			this->index = index;
		}
		void setSecret(std::string secret){
			this->secret = secret;
		}
		void setFirstName(std::string firstName){
			this->firstName = firstName;
		}
		void setPhoneNumber(std::string phoneNumber){
			this->phoneNumber = phoneNumber;
		}
};

class PhoneBook
{
	public:
		PhoneBook(){
			std::cout << "constructor worked" << std::endl;
		}
		Contact contact[9];
		~PhoneBook(){
			std::cout << "destroyed." << std::endl;
		}
};

void	print_first_name(PhoneBook *CList, int search);
void	print_surname(PhoneBook *CList, int search);
void	print_nickname(PhoneBook *CList, int search);
void	ft_putLine(int i);
void	print_Information(PhoneBook *CList, int index);
void	set_FirstName(PhoneBook *CList, int i);
void	set_Surname(PhoneBook *CList, int i);
void	set_Nickname(PhoneBook *CList, int i);
void	set_DarkestSecret(PhoneBook *CList, int i);
void	set_PhoneNumber(PhoneBook *CList, int i);
int		chooseView(int i);

#endif
