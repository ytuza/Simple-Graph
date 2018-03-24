#pragma once

#include "graph/graph.hpp"
#include <QPointF>
#include <deque>

class CoordGraph : public Graph<QPointF, double> {
private:
  std::deque<node *> randomGenNodes(int nodesN, double limitA, double limitB);
  void sortNodes();
  double distance(node *a, node *b);
  void randomGenEdges(unsigned int maxEdges, double distance);

public:
  void randomGeneration(int nodesN, int edgesN, double distance, double limitA,
                        double limitB);
  void removeNodeRange(QPointF first, QPointF last);
};