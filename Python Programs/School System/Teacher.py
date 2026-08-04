from Person import Person
class Teacher(Person):
    def __init__(self, name, age, subject, teacher_id, class_name, salary, experience, qualification, contact_Number):
        super().__init__(name=name, age=age, id=teacher_id, contact_number=contact_Number)
        self.subject = subject
        self.class_name = class_name
        self.salary = salary
        self.experience = experience
        self.qualification = qualification

    def get_subject(self):
        return self.subject

    def get_class(self):
        return self.class_name

    def get_salary(self):
        return self.salary

    def get_experience(self):
        return self.experience

    def get_qualification(self):
        return self.qualification