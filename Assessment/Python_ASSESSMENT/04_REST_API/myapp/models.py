from django.db import models

# Create your models here.

class Snippet(models.Model):
    title = models.CharField(max_length=100)
    code = models.TextField()
    linenos = models.BooleanField(default=False)
    language = models.CharField(max_length=100)
    style = models.CharField(max_length=100)

    def __str__(self):
        return self.title