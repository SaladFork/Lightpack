#ifndef IPCCONTEXT_HPP
#define IPCCONTEXT_HPP

#include "windows.h"
#include "../common/D3D10GrabberDefs.hpp"
#include "LoggableTrait.hpp"

class IPCContext : public LoggableTrait
{
public:
    IPCContext(Logger *logger): LoggableTrait(logger) {}
    ~IPCContext();

    bool init();
    void free();

    HANDLE m_hSharedMem;
    HANDLE m_hMutex;
    HANDLE m_hFrameGrabbedEvent;

    HOOKSGRABBER_SHARED_MEM_DESC m_memDesc;

    PVOID m_pMemMap;
};

#endif // IPCCONTEXT_HPP
