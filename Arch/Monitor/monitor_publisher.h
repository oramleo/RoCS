//
// Laboratory of Robotics and Cognitive Science
// Created by:  Leonardo de Oliveira Ramos
// Github:      https://github.com/oramleo
//

#ifndef ARCH_MONITOR_PUBLISHER_H_
#define ARCH_MONITOR_PUBLISHER_H_

#include <vector>
#include "../Util/publisher.h"
#include "../Analyze/monitor_observer.h"

class MonitorPublisher: public Publisher
{
private:
    std::vector < MonitorObserver > observers;

public:
    virtual void attach(MonitorObserver observer) = 0;

    explicit MonitorPublisher(const std::vector<MonitorObserver>& observers):
            observers(observers)
    {}
};


#endif // ARCH_MONITOR_PUBLISHER_H_
