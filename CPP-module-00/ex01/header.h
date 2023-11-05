#ifndef HEADER_H
#define HEADER_H

#include<iostream>

#define RST  	"\x1B[0m"
#define RED  	"\x1B[31m"
#define GRN  	"\x1B[32m"
#define YEL  	"\x1B[33m"
#define BLU  	"\x1B[34m"
#define MAG  	"\x1B[35m"
#define CYN  	"\x1B[36m"
#define WHT  	"\x1B[37m"

class Contact{
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

	private:
		std::string firstName;
		std::string surName;
		std::string nickname;
		std::string phoneNumber;
		std::string secret;
		int index;
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

void	print_first_name(PhoneBook *rehber, int search);
void	print_surname(PhoneBook *rehber, int search);
void	print_nickname(PhoneBook *rehber, int search);
void	ft_putLine(int i);
void	print_Information(PhoneBook *rehber, int index);

#endif