# Requirements 👁️‍🗨️

 ## About Phonebook Mini Project in C✒️

  ### Phonebook is a very simple mini project in C that can help you understand the basic concepts of functions, file handling and data structure. This application will teach you how to add, list, modify or edit, search and delete data to/from the file

  ### Adding new records, listing them, modifying them and updating, search for contacts saved, and deleting the phonebook records are the basic functions which make up the main menu of this Phonebook application (as shown in the main menu screenshot below)

  ### Personal information such as name, sex, father’s name, phone number, citizenship number, email and address are asked while adding a record into the Phonebook These records can then be modified, listed, searched for and removed

 ## I have used many functions in this mini project These functions are easy to understand as their name only signifies their respective operations ✒️

    1. void menu() – This function is used to display the main menu
    2. void start() – This functions calls the menu function mentioned above
    3. void back() – This function is used to go back to start
    4. void addrecord() – It adds a new Phonebook record
    5. void listrecord() – This function is used to view list of added records in file
    6. void modifyrecord() – This function is used to modify added records
    7. void deleterecord() – It deletes record from file
    8. void searchrecord() – It searches for added record by name

 ## feature 🖋️

   ### 1_you can ADD new database 
   ### IN NEW DATABASE YOU CAN ENTER 
       1. Name
       2. Father Name
       3. Mother Name
       4. Phone no
       5. sex
       6. Address
       7. Email Address
   ### 2. you can List Database
   ### 3. you can MODIFY Database
   ### 4. you can SEARCH Database
   ### 5. you can DELETE Datacase
 
  ## SWOT ANALYSIS 💭

  ### STRENGTHS
    1. NON Governed By Internet
    2. User-friendly Interface
    3. Simple to Use
    4. if there are many Database **Search** option is there
  
  ### WEAKNESS

    1. Only Availabe in Application form
    2. Required Memory to store Dataabse
    3. once deleted database Can't be retained

  ### OPPORTUNITIES

    1. Innovation
    2. Store complete information under single contact

  ### THREATS

    1. Inimitable app function
    2. Database over flow

  ### 4W's and 1H 💭

     WHO -This application is for everyone who want to store complete database of a person 
     WHAT -As maintaining of complete information under single contact.
     WHEN -When user wants to store Personal information such as name, sex, father’s name, phone number, citizenship number, email and address are asked while adding        a record into the Phonebook. These records can then be modified, listed, searched for and removed
     WHERE -This application can be used for personal use. In addition, corporations and organisations use it

  ### 1H 💭
 
     HOW -Have to mannually create complete database information through this application 

  ### DETAIL REQUIRMENTS ▶️
  TEST_PLAN 📈

Detail requirements

High Level Requirements

| ID	| Description |	Category |	Status |
|-----|-------------|----------|---------|
| HR01	| User shall be able to add new contact |	Functional| Working |
| HR02	| User shall be able to add information | Functional| Working |
| HR03	| User shall be able to edit contact |	Functional | Working	 |
| HR04	| User shall be able to delete contact |	Functional | Working |
| HR05	| User shall be able to save contact in application |	Functional | Working |
| HR06	| User shall be able to read contact from user |	Functional |	Working |
| HR07	| Data should not be lost if any failure |	Non-Functional |	Working |
| HR08	| When closing the system data should always be stored |	Non-Functional | Working |

Low level Requirements

| ID |	Description |	HLR ID | Status  |
|-------|-----------|--------|---------|
| LR01 |	1 New contact shall be added by providing all the information | HR01  | Category |
| LR02 |	2 contact name should be unique or else it should not be accepted | HR01  | Function |		
| LR03 |  contact person data is there first being by searching the name of person | HR02  | Functional |
| LR04 |	While searching all the contact, all should be visible if user wants to see more | HR02   | Functonal |

Design

High Level Design
![image](https://user-images.githubusercontent.com/94338447/143380275-3855d569-a845-46c6-b607-f21854358203.png)

Low Level Design
![image](https://user-images.githubusercontent.com/94338447/143381001-4c74ee5f-baa9-43ba-93c8-a9ac67461672.png)
