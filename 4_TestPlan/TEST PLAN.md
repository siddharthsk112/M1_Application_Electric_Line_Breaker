TEST PLAN:
**Table no: High level test plan**
| Test ID | Description | Exp I/P | Exp O/P | Actual Out | Type Of Test |
| ------- | ----------- | ------------- | --------- | ---------- | -------- |
|H_01|Checks the phone number is already stored | Lineman's Phone number| Present | Present | Requirement based|
|H_02|Checks the password entered is correct|Password|Matched|Matched|	Scenario based|
|H_03|Checks the status and performs the action|Command|Turned ON/OFF|Turned ON/OFF|Boundary based|

**Table no: Low level test plan**

| Test ID | Description | Exp I/P | Exp O/P | Actual Out | Type Of Test |
| ------- | ----------- | ------------- | --------- | ---------- | -------- |
|L_01|Gets the phone number in long long int variable and checks it is correct or not|Phone number|Matched|Matched|Requirement based|
|L_02|Gets the password as int variable and checks it's the particular line's password|Password|Matched|Matched|Scenario based|
|L_03|Checks the current status of the particular line and performs the action|Command|Turned ON/OFF|Turned ON/OFF|Boundary based|