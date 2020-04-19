using System.Diagnostics;
using System.IO;

namespace App
{
    class Program
    {
        static void Main(string[] args)
        {
            var cwd = Directory.GetCurrentDirectory();
            var exePath = Path.Combine(cwd, "..", "..", "..", "ErrorThrowingApp", "bin", "Debug",
                "ErrorThrowingApp.exe");
            var profilerPath = Path.Combine(cwd, "..", "..", "..", "ProfilerAtl", "Debug",
                "ProfilerAtl.dll");
            
            ProcessStartInfo psi = new ProcessStartInfo(exePath);

            psi.EnvironmentVariables.Add("COR_ENABLE_PROFILING", "1");
            psi.EnvironmentVariables.Add("COR_PROFILER", "{9E2B38F2-7355-4C61-A54F-434B7AC266C0}");
            psi.EnvironmentVariables.Add("COR_PROFILER_PATH", profilerPath);
            psi.EnvironmentVariables.Add("COMPLUS_ProfAPI_ProfilerCompatibilitySetting", "EnableV2Profiler");

            psi.UseShellExecute = false;
            Process.Start(psi);
        }
    }
}
