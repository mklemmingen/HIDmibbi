# HIDmibbi
Simple Admin Access on WIN11 devices using any microcontroller with HID over USB

Using the Windows 11 GUI with a HID Library, the Microcontroller simulates keyboard inputs to gain admin access in 7 commands. 

1. Windows Button to open Start
2. Types in Command
3. Key_right
4. Key_down
5. Enter
6. Key_left
7. Enter
-> deliver exploit via command type in+enter cycle

If the exploited user has admin rights, and a standard .iso installed without any modifications, the exploit runs flawlessly. 
In order for it to work, the computer has to allow new HID devices automatically, which is standard.
