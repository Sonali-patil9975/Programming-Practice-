import Animal
import Human    
animal1 = Animal.Animal("Human", 50)
print("Animal Name:", animal1.get_name())
print("Animal Age:", animal1.get_age())  

animal2 = Animal.Animal("cat", 3)
print("Animal Name:", animal2.get_name())   
print("Animal Age:", animal2.get_age()) 

animal3 = Animal.Animal("dog", 5)  
print("Animal Name:", animal3.get_name())   
print("Animal Age:", animal3.get_age())  

animal4 = Animal.Animal("cow", 10)
print("Animal Name:", animal4.get_name())       
print("Animal Age:", animal4.get_age())

animal5 = Animal.Animal("tiger", 15)
print("Animal Name:", animal5.get_name())   
print("Animal Age:", animal5.get_age())

human1= Human.Human("Sonali", 25)
print("Human Name:", human1.get_name())
print("Human Age:", human1.get_age())

human2= Human.Human("Arati", 30)
print("Human Name:", human2.get_name())
print("Human Age:", human2.get_age())