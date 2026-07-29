import requests 


url = "https://randomuser.me/api/"
response = requests.get(url)

print("status code =", response.status_code)
resp = response.json()
print("response =", resp)
print("status message =", resp.get("results")[0].get("name").get("first"))
print("Gender =", resp.get("results")[0].get("gender"))
print("Phone  =", resp.get("results")[0].get("cell"))
print("country =", resp.get("results")[0].get("location").get("country"))

