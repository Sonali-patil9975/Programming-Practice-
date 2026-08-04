from  Person import Person
class Student(Person):

    def __init__(self, name, age, grade, id, roll_number, class_name, parent_name, contact):
        super().__init__(name=name, age=age, id=id, contact_number=contact)
        self.grade = grade
        self.roll_number = roll_number 
        self.class_name = class_name
        self.parent_name = parent_name

    def set_info(self):
        print("Name: {self.name}, Age: {self.age}, Grade: {self.grade}, Student ID: {self.id}, Roll Number: {self.roll_number}, Class: {self.class_name}, Parent Name: {self.parent_name}, Parent Contact: {self.contact_number}")
    def get_grade(self):
        return self.grade

    def get_roll_number(self):
        return self.roll_number
    def get_class_name(self):
        return self.class_name
    def get_parent_name(self):
        return self.parent_name

    
    