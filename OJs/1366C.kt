﻿import java.lang.AssertionError
import java.util.*
import kotlin.collections.ArrayList
import kotlin.math.*
import kotlin.collections.HashMap
import java.util.Collections as JavaUtilCollections

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles

private const val mod: Long = 1000000007

private fun myAssert(x: Boolean) {
	if (!x) {
		throw AssertionError()
	}
}

private fun minv(v: Long): Long {
	return mpow(v, mod - 2)
}

private fun mpow(base: Long, exp: Long): Long {
	var base = base
	var exp = exp
	var res: Long = 1
	while (exp > 0) {
		if (exp and 1 == 1L) {
			res = res * base % mod
		}
		base = base * base % mod
		exp = exp shr 1
	}
	return res
}

private fun gcd(x: Int, y: Int): Int {
	if (x == 0) return y
	return if (y == 0) x else gcd(y % x, x)
}

private fun check(): Unit {
	var (n , m) = readInts()
	var D = Array(1007){ Array(10) { 0 } }

	for(i in 0 until n ){
		val x = readInts()
		for(j in 0 until m){
			D[ i + j ][ x[j] ]++
		}
	}

	var ans = 0 ; var sz = n + m - 1

	for( i in 0 until sz / 2){
		ans += minOf( D[i][0] + D[n + m - 2 - i][0] , D[i][1] + D[n + m - 2 - i][1])
	}

	println( ans )
}

fun main(){
	var tt = 1
    tt = readInt()
	repeat(tt){
		check()
	}
}

