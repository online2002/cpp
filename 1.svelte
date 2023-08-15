<script>
    let bool = false;
    function change(){
        bool = !bool;
    }
</script>
{#if bool}
    <button on:click={change}></button>
{/if}
{#if !bool}
    <button on:click={change}></button>
{/if}