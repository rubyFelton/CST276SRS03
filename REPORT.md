# CST276SRS02  

Date Validation Strategy/Template Method  

Name: ruby felton 

---
Issues: load not working so I do not know if my factory works correctly. 
Did not get to the point of creating a rectangle shape and making that the first thing down 


Notes:  


constructing shapes handeled by shapefactory, the creator in the gof factor pattern
file io handled by client 
client holds a drawing which holds shapes
all shape type inherite from shape 
They are the leafs in the GOF composite pattern and the products in the gof factory pattern
picture is a composite from the composite pattern

circle, line, polygon, and composite inherite from shape
drawing has reference to shape
Drawing drawing
drawing.load("drawfile.json")
drawing.add(circle);
drawing.display();
drawing.save("anotherdrawing.json");
###

