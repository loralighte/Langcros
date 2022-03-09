#include "hacklon.h"
stdns end

function main open close
start
    display "Hello, world!" el end
    for open int i = 0 end i < 10 end i++ close start 
        display i el end
    stop
    s mystr set "hello" end
    if open mystr equals "goodbye" close start 
        display "goodbye" el end
    stop elif open mystr equals "hello" close start
        display mystr el end
    stop
    r zero end
stop
