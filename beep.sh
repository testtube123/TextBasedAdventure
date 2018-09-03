#!/bin/sh
{
timeout 0.4s  &> /dev/null speaker-test -f 500 -t sine -l 1 -S  50 
}
