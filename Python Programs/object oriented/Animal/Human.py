from Animal import Animal

class Human(Animal):
     def get_name(self):
           print("Inside Humman Name:", self.name)
           return self.name
   