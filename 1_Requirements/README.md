# **Requirements**

**Introduction**

- In recent times, we have seen that more linemen were electrocuted by electric shock and some of them died while working on the electrical cable lines. This is due to the improper communication between the sub-station and the linemen.
- This system ensures the safety of the linemen by controlling the power supply on the electrical lines and decreases the rate of injuries to linemen due to electrocution.
[picture link](https://www.google.com/imgres?imgurl=https%3A%2F%2Fhacksterio.s3.amazonaws.com%2Fuploads%2Fattachments%2F294045%2Fgsm-based-home-automation-system-circuit-diagram_vJAuQxqAl0.gif&imgrefurl=https%3A%2F%2Fcreate.arduino.cc%2Fprojecthub%2Fbrink-io%2Fgsm-based-home-automation-fe5e57&tbnid=vtwGJXn7Up6SnM&vet=12ahUKEwjA__SW4KH0AhVbi9gFHYkZD-sQMygPegUIARDMAQ..i&docid=_4yQ3LCW-Dcm8M&w=954&h=637&itg=1&q=electric%20line%20breaker%20using%20ardiuno%20and%20gsm%20module&ved=2ahUKEwjA__SW4KH0AhVbi9gFHYkZD-sQMygPegUIARDMAQ)
****
**Research**

- **Fatal Occupational electrocution in electric linemen(2015)**
- 
    Electrocution as an occupational fatality can occur either in people working in the electricity department or people working in some other industry where they become a victim of electrocution. Such deaths are mostly accidental in origin, and the common victims are the electric technicians/linemen.
- **Password Based Circuit Breaker(2016)**
- 
     This system is completely controlled by a little controller from the 8051 family. A matrix keypad is interfaced to the tiny controller to enter the identification. The entered identification is compared with the identification hold on within the shop of the tiny controller. If the identification entered is correct then solely the load is going to be turned ON/OFF.
****
**Cost and Features and Timeline**

**cost:** 

**1&#39;s Gen:** Rs:1000

**2&#39;s Gen:** Rs:1500

**Our project:** Rs:2000

**Features:**

1.Can remotely access for 24 x 7.

2.Protected with password.

3.Easy to operate.
****
**Defining Our System**

The line man send the password to the SIM inserted in the GSM module.Arduino reads the password using read() function and verifies it using the code.After verification, Relay module switch off/on the power supply to the electric lines. Then Acknowledge the status of power supply to the line man through SMS.
[picture link](https://www.google.com/imgres?imgurl=x-raw-image%3A%2F%2F%2F9c2c97cceb99cf86d0a26ba300b5723ab31e36a2c9c3ad5c69ad78a71b8c2975&imgrefurl=https%3A%2F%2Fwww.ijariit.com%2Fmanuscripts%2Fv3i3%2FV3I3-1553.pdf&tbnid=hs-Z68yXLJz-LM&vet=12ahUKEwjA__SW4KH0AhVbi9gFHYkZD-sQMygHegUIARC8AQ..i&docid=yDSYoyGoZIIUvM&w=625&h=675&itg=1&q=electric%20line%20breaker%20using%20ardiuno%20and%20gsm%20module&ved=2ahUKEwjA__SW4KH0AhVbi9gFHYkZD-sQMygHegUIARC8AQ)

****
**SWOT ANALYSIS**

**Strength:**
- provides protection for electri lineman's from electrocution.
- Easily accessable.

**Weakness:**
- Can't work without network connectivity. 

**Opportunities**
- Can identify who accessed and currently accessing the line.

**Threats**
- Anyone can access with the registered mobile phone.
[picture link](https://predictabledesigns.com/wp-content/uploads/2017/05/GSM_Fritzing2.jpg)
****

# **4W&#39;s and 1&#39;H**

**Who: Electric Lineman**

**What: To switch ON/OFF the electric supply for the particular defected electric line.**

**When: While need to check the status of the electric line or to switch ON/OFF the electric supply.**

**Where: Lineman Can access from anywhere.**

**How:Using SMS from the mobilephone.**
****
# **Detail requirements**

**High Level Requirements:**

**1. Electric line breaker which will act according to the lineman's command.

2.Can check the status of the particular electric line.

3.Can record the history of, Who accessed the electric lines and can give access to certain person, Which increases the security.**

**Low level Requirements:**
| Id             |   Description |
| -------------- | --------- |
|LLR-1-HLR-1 |   Gets the command through the SMS, Performs the action and sends the acknowledgment through SMS.
|LLR-2-HLR-1|Process the commands based on the conditons entered in the Code.
|LLR-1-HLR-2|Gets the text(Char) SMS of the specific line to check the status and replies back with the text(Char) SMS.
|LLR-1-HLR-3|Stores the incoming and outgoing SMS in the Stack.|


