

#ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		void addContact(void);
		void searchContact();
	private:
		static const int MAX_CONTACTS = 8;
		int newContactIndex;
		int contactAmount;
		Contact *contacts[MAX_CONTACTS];
};

#endif
