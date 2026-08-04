from Person import Person
class Committee(Person):
    def __init__(self, name, age, position, ID, experience, qualification, salary, department, contact_number):

        super().__init__(name=name, age=age, id=ID, contact_number=contact_number)
        self.position = position
 
        self.experience = experience
        self.qualification = qualification
        self.salary = salary
        self.department = department
 

    def get_position(self):
        return self.position

    def get_experience(self):
        return self.experience

    def get_qualification(self):
        return self.qualification

    def get_salary(self):
        return self.salary

    def get_department(self):
        return self.department

    
