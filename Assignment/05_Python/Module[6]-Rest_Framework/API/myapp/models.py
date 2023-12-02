from django.db import models

# Create your models here.

class Employee(models.Model):
	employee_name=models.CharField(max_length=50,blank=True)
	depa_id=models.PositiveIntegerField(blank=True)
	depa_name=models.CharField(max_length=50,blank=True)
	salary=models.PositiveIntegerField(blank=True)

	def __str__(self):
		return self.employee_name