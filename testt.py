import json
import requests
import sys

if len(sys.argv) != 2:
    sys.exit()

response = requests.get("https://www.youtube.com/@" + sys.argv[1])
print(response.json())