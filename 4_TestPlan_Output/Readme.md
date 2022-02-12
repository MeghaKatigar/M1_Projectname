#High Level Description
| Test ID | Description | Input Value | Expected O/P | Actual O/P|
| ---         |     ---      |          --- |
| HL_01   | Registration     | * (First Name, Surname)=(Megha , Katigar)| Registration Successful | Registration Successful |
|       |          |        | * (Username, Password) =( Meghak, Megha@123       )  |             |
| HL_02   | Login       |( Userame,Password )=(Megha, Megha@123)    | Successful login | Incorrect username or password |
|HL_03| Login  | (Username, Password)=(Meghak, Megha@123)|| Successful login | Successful login|
