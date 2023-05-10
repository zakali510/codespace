import json
import requests
import sys


response = requests.get("https://www.google.com/maps")

print(response.json())