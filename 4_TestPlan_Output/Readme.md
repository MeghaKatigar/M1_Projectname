# High Level Description

| Test ID | Description | Input Value | Expected O/P | Actual O/P|
| ---|     ---      | --- | --- | --- |
| HL_01   | Registration for New User     |  (First Name, Surname)=(Megha , Katigar)| Registration Successful | Registration Successful |
|       |                |  (Username, Password) =( Meghak, Megha@123       )  |      |       |
| HL_02   | Login after registration      |( Userame,Password )=(Megha, Megha@123)    | Successful login | Incorrect username or password |
|HL_03| Login  | (Username, Password)=(Meghak, Megha@123)|| Successful login | Successful login|
|HL_04| Reservation of seats| (name ,Num_of_Seats, Train_No) = (MeghaK,4, 15017)| Reservation Successful | Reservation Successful |


# Low Level Description 

| Test ID | Description | Input Value | Expected O/P | Actual O/P|
|---|---|---|---|---|
|LL_01| Cancellation of seats | (Train_No)=(15016)| Seats are Cancellaed | You have not reserved any seats |
|LL02|Cancellation of seats | (Train_No)=(15017) | Seats are cancelled |Seats are cancelled |
