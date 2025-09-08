// dinh nghia cac ham 
#pragma once
#include <iostream>
#include <string>
#include <regex>
#include "contact_lish"

using namespace std;

// bool is_valid_phone(const string &s) const;
// ham kiem tra so dien thoai hop le
bool contac_list::is_valid_phone(const string &s) const{
	// 0123456789 or etc....
    return regex_match(s, regex("^[0-9]{9,11}$"));
}

// bool is_valid_email(const string &s) const;
// ham kiem tra emial co hop le hay khong
bool contact_list::is_valid_email(const string &s) const{
	// dinhanbang@gmail.com
    return regex_match(s, regex("^[\\w.-]+@[\\w.-]+\\.[a-zA-Z]{2,}$"));
}

//bool is_valid_word(const string &s) const;
bool contact_list::is_valid_word(const string &s) const{
   // check ten bang cach check xem no co phai toan chu hay khong
   return regex_match(s, regex("^[a-zA-Z ]{1,40}$"));
}

//bool is_valid_address(const string &s) const;
bool contact_list::is_valid_address(const string &s) const{
   // check dia chi muon luu bang cac ki tu dac biet so va word
   return regex_match(s, regex("^[a-zA-Z0-9 ,.\\#]{2,500}$"));
}

//bool is_valid_image(const string &s) const;
bool contact_list::is_valid_image(const string &s) const {
	// regex.icase hoa thuong gi cung giong nhau
    return regex_match(s, regex("^(https?://).+\\.(jpg|jpeg|png|gif|bmp)$", regex::icase));
}

// contact_list(string name ="", string phone ="", string email ="", string address ="", string image ="");
contact_list::contact_list(string name, string phone, string email, string address, string image) : name(name), phone(phone), email(email), address(address), image(image) {
}

// cac ham getter nham lay cac gia tri trong private ra de ham main su dung gian tiep
//string getName() const;
//string getPhone() const;
//string getEmail() const;
//string getaddress() const;
//string getImage() const;

string contact_list::getName() const{
	return name;
}

string contac_list::getPhone() const{
    return phone;
}

string contact_list::getEmail() const{
	return email;
}

string contac_list::getAddress() const{
    return address;
}

string contac_list::getImage() const{
    return image;
}

// cac ham setter thay doi cac gia tri sau khi duoc ham getter lay ban sao ra
//void setName(const string &name);
//void setPhone(const string &phone);
//void setEmail(const string &email);
//void setAddress(const string &address);
//void setImage(const string &image);

// neu khong co & thi phi se la O(m) vi ham phai tao 1 ban sao theo m ky tu
// neu co & ham se lam viec voi dia chi cua chuoi do voi do phuc tap la O(1)
void contact_list::setName(const string &name){
	this->name = name;
}

void contact_list::setPhone(const string &phone){
    this->phone = phone;
}

void contact_list::setEmail(const string &email){
	this->email = email;
}

void contact_list::setAddress(const string &address){
	this->address = address;
}

void contact_list::setImage(const string &image){
	this->image = image;
}

// ham nhap thong tin 
//void inputName();
//void inputPhone();
//void inputEmail();
//void inputAddress();
//void inputImage();

// dung while true de check nhap ho ten
void contact_list::inputName(){
	
	while(true){
		
		cout << "\nInput name((string between 1 to 40), " ", a -> z, A -> Z): ";
		getline(cin, name);
		
		if(is_valid_word(name) == true){
			cout << "\nValid name: " << name;
			break;
			
		}else{
			cout << "\nYou must input between 1 to 40 characters, No special world and use anphabet!.Input again: ";
		}
	}
}

//nhap so dien thoai
void contact_list::inputPhone(){
	
	while(true){
		
		cout << "Input your contact number(9 - 11): ";
		getline(cin, phone);
		
			
		if(is_valid_phone(phone) == true){
			cout << "\nValid phone: " << phone;
			break;
		}else{
			cout << "\nInvalid phone number. phone number must be between 9 - 11 characters and the number (1 to 9). Input again: ";
		}
	}
}


// nhap dia chi email
void contact_list::inputEmail(){
	
	while(true){
		
		cout << "\nInput your email(valid email invols: special characters + words + number): ";
		getline(cin, email);
		
		if(is_valid_email(email) == true){
			cout << "\nValid email: " << email;
			break;
		}else{
			cout << "\nInvalid email!.Input your email again(valid email invols: special characters + words + number): ";
		}
	}
}

//nhap dia chi
void contact_list::inputAddress(){
	
	while(true){
		
		cout << "\nInput your address(valid address invols: number + characters in your hometown): ";
		getline(cin, address);
		
		if(is_valid_address(address) == true){
			cout << "\nValid address: " << address;
			break;
		}else{
			cout << "\nInvalid address!.Input your address again(valid address invols: special characters + words + number): ";
		}
	}
}

//nhap link hinh anh
void contact_list::inputImage(){
	
	while(true){
		
		cout << "\nInput your Image(valid Image invols: number + special characters + demain + last link picture): ";
		getline(cin, image);
		
		if(is_valid_image(image) == true){
			cout << "\nValid image: " << image;
			break;
		}else{
			cout << "\nInvalid image!.Input your image again(valid Image invols: number + special characters + demain + last link picture): ";
		}
	}
}







 
