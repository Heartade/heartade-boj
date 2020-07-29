import java.util.Scanner

fun recursiveGetDist(maxDistanceList: Array<Int>, connectionList: Array<Array<Int>>, dst: Int): Int {
  if (maxDistanceList[dst] != -1) return maxDistanceList[dst]
  maxDistanceList[dst] = 0
  for(i in 0..maxDistanceList.size-1) {
    if (connectionList[i][dst] != 0) {
      val distance = recursiveGetDist(maxDistanceList, connectionList, i) + connectionList[i][dst]
      maxDistanceList[dst] = if(maxDistanceList[dst] < distance) {
        distance
      } else {
        maxDistanceList[dst]
      }
    }
  }
  return maxDistanceList[dst]
}

fun main() {
  val scanner: Scanner = Scanner(System.`in`)
  val numTests = scanner.nextInt()
  for(i in 0..numTests-1) {
    val numBuildings = scanner.nextInt()
    val numRules = scanner.nextInt()
    val connectionList: Array<Array<Int>> = Array(numBuildings) { Array(numBuildings) {0} }
    val maxDistanceList: Array<Int> = Array(numBuildings) {-1}
    val distanceList: Array<Int> = Array(numBuildings) {0}
    for(j in 0..numBuildings-1) {
      distanceList[j] = scanner.nextInt()
    }
    for(j in 0..numRules-1) {
      val src = scanner.nextInt() - 1
      val dst = scanner.nextInt() - 1
      connectionList[src][dst] = distanceList[src]
    }
    val finalDst = scanner.nextInt() - 1
    println(recursiveGetDist(maxDistanceList, connectionList, finalDst) + distanceList[finalDst])
  }
}
