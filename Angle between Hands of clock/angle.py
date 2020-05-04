#To find the smaller angle between the hour hand and minute hand.

def angleClock(self, hour: int, minutes: int) -> float:
    h=((hour%12)+minutes/60)*30    #for calculating the angle covered by the hour hand from 00:00
    m=(minutes/60)*360             #for calculating the angle covered by the minute hand from 00:00
    if(abs(h-m)<(360-abs(h-m))):   #for checking the smaller angle between the hands!!!
        return abs(m-h)
    return 360-abs(h-m)

    
