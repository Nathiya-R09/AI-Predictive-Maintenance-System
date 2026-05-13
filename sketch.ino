{
  "version": 1,
  "author": "Nathiya",
  "editor": "wokwi",
  "parts": [
    {
      "type": "wokwi-arduino-uno",
      "id": "uno",
      "top": 0,
      "left": 0
    },
    {
      "type": "wokwi-lcd1602",
      "id": "lcd1",
      "top": -180,
      "left": 220
    },
    {
      "type": "wokwi-potentiometer",
      "id": "pot1",
      "top": 180,
      "left": -220
    },
    {
      "type": "wokwi-buzzer",
      "id": "buzz1",
      "top": 180,
      "left": 220
    },
    {
      "type": "wokwi-led",
      "id": "led1",
      "top": 180,
      "left": 120,
      "attrs": { "color": "green" }
    },
    {
      "type": "wokwi-tmp36",
      "id": "temp1",
      "top": -180,
      "left": -220
    }
  ],
  "connections": [
    [ "temp1:VCC", "uno:5V", "red" ],
    [ "temp1:GND", "uno:GND.1", "black" ],
    [ "temp1:OUT", "uno:A0", "green" ],

    [ "pot1:VCC", "uno:5V", "red" ],
    [ "pot1:GND", "uno:GND.1", "black" ],
    [ "pot1:SIG", "uno:A1", "blue" ],

    [ "buzz1:1", "uno:8", "purple" ],
    [ "buzz1:2", "uno:GND.1", "black" ],

    [ "led1:A", "uno:9", "green" ],
    [ "led1:C", "uno:GND.1", "black" ],

    [ "lcd1:VSS", "uno:GND.1", "black" ],
    [ "lcd1:VDD", "uno:5V", "red" ],
    [ "lcd1:VO", "pot1:SIG", "blue" ],
    [ "lcd1:RS", "uno:12", "green" ],
    [ "lcd1:RW", "uno:GND.1", "black" ],
    [ "lcd1:E", "uno:11", "green" ],

    [ "lcd1:D4", "uno:5", "green" ],
    [ "lcd1:D5", "uno:4", "green" ],
    [ "lcd1:D6", "uno:3", "green" ],
    [ "lcd1:D7", "uno:2", "green" ]
  ]
}