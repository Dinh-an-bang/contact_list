#pragma once
#include <iostream>
#include <string>

using namespace std;

class contact_list {
	private:
		// tao cac bien trong class
		string name;
		string phone;
		string email;
		string address;
		string image;
		
		// ham ho tro kiem tra email va phone number
		bool is_valid_phone(const string &s) const;
		bool is_valid_email(const string &s) const;
		bool is_valid_word(const string &s) const;
		bool is_valid_address(const string &s) const;
		bool is_valid_image(const string &s) const;
		
		public:
			// Constructor trong class nay la contact_list
			// de gia tri rong cho cac bien chua cap nhat
			contact_list(string name ="", string phone ="", string email ="", string address ="", string image ="");
			
			// cac ham getter de lay gia tri tu private cua class
			// vai tro chinh la doc chu khong duoc quyen thay doi
			string getName() const;
			string getPhone() const;
			string getEmail() const;
			string getAddress() const;
			string getImage() const;
			
			// cac ham setter dung de gan gia tri cho cac bien thuoc tinh private
			void setName(const string &name);
			void setPhone(const string &phone);
			void setEmail(const string &email);
			void setAddress(const string &address);
			void setImage(const string &image);
			
			// ham nhap thong tin contact_list
			void inputName();
			void inputPhone();
			void inputEmail();
			void inputAddress();
			void inputImage();
			
			// ham input tong tat ca
			void input();
			
			// ham display thong tin
			void display() const;
			
};
