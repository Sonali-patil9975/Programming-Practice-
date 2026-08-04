class Person:
    def __init__(self, name, age, id,contact_number):
        super().__init__()
        self._name = name
        self._age = age
        self._id = id
        self._contact_number = contact_number

    def get_name(self):
        return self._name

    def get_age(self):
        return self._age

    def get_id(self):
        return self._id

    def get_experience(self):
        return self._experience

    def get_qualification(self):
        return self._qualification

    def get_salary(self):
        return self._salary

    def get_department(self):
        return self._department

    def get_contact(self):
        return self._contact_number