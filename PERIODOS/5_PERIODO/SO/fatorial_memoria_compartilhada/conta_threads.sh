#!/bin/bash

# Inicie o processo em segundo plano
./$1 10000000 &

# Obtenha o PID do processo
PID=$!

# Loop para monitorar o número de threads
while kill -0 $PID 2>/dev/null; do
    THREADS=$(ps -o nlwp= -p $PID)
    echo "Número de threads: $THREADS"
    sleep 1
done


