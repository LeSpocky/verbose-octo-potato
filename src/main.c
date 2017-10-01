#include <stdio.h>

#include <mosquitto.h>

int main( int argc, char *argv[] )
{
    int mosq_major, mosq_minor, mosq_rev;

    mosquitto_lib_version( &mosq_major, &mosq_minor, &mosq_rev );
    printf( "mosquitto version: v%i.%i.%i\n", mosq_major, mosq_minor,
            mosq_rev );

    return 0;
}
