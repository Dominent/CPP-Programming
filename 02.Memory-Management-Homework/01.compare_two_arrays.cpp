#include <iostream>

template<class T>
bool Compare( T [], T [], bool ( * ) ( T, T ) );

bool Comparator( int, int );

int main ( void )
{
    bool AreEqual = false;

    AreEqual = Compare<int>( new int[4] { 1, 2, 3, 4 },
			     new int[4] { 1, 2, 3, 4 },
			     &Comparator );

    std::cout << AreEqual << std::endl;

    return ( 0 );
}

template<class T>
bool Compare( T Arr1[], T Arr2[], bool ( *Comparator ) ( T val1, T val2 ) )
{
    int Size = sizeof( Arr1 ) / sizeof( T );
    
    if( Size != ( sizeof(Arr2) / sizeof ( T ) ) )
    {
	return ( false );
    }

    for( int i = 0; i < Size; ++i )
    {
	if( !Comparator( Arr1[i], Arr2[i] ) )
	{
	    return ( false );
	}
    }
    
    return ( true );
}

bool Comparator( int Val1, int Val2 )
{
    return ( Val1 == Val2 );
}
